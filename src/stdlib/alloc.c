/**
 * @file   alloc.c
 * @author Peter Zueger
 * @date   08.02.2018
 * @brief  dynamic memory allocation
 */
#include <stdlib.h>
#include <stddef.h>
#include <types/size_t.h>
#include <macros/NULL.h>
#include <__config.h>

/**
 * container_of - cast a member of a structure out to the containing structure
 * @param ptr:    the pointer to the member.
 * @param type:   the type of the container struct this is embedded in.
 * @param member: the name of the member within the struct.
 */
#define container_of(ptr, type, member) ({                      \
        const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
        (type *)( (char *)__mptr - offsetof(type,member) );})

/**
 * Force Memory alignement
 * rounds up to 4
 * 1,2,3,4 -> 4
 * 5,6,7,8 -> 8 ...
 */
#define MEM_ALIGN(x)   (((x)+3)&~0x03))

/**
 * get the respective memory from the block
 * or vice versa
 */
#define BLOCK_FROM_MEM(m) (container_of(m,block_t,memory))
#define MEM_FROM_BLOCK(b) (&((b)->memory))

/**
 * magic values for block identification
 */
#define MAGIC_USED (0xACDCDEAF)
#define MAGIC_FREE (0xDEADBEEF)

/**
 * flags for the implementation
 */
#define MALLOC_FLAG_CLOBBERED (0x1 << 0xC)

typedef struct block_t {
    struct block_t* prev; /**< pointer to the next block */
    struct block_t* next; /**< pointer to the previous block */
    size_t size;          /**< size of the block not including this struct */
    size_t magic;         /**< magic value for identification */
    char* memory;         /**< first Byte the user gets dont modify !*/
}block_t;

typedef struct{
    struct block_t* first;/**< pointer to first memory block */
    struct block_t* last; /**< pointer to last memory block */
    size_t flags;         /**< various flags for the implementation */
    size_t used;          /**< total allocated memory in bytes*/
}malloc_t;

/**
 * this struct contains the global inforamtion needed by this implementation
 * all processor dependant information in /include/__config.h
 * this struct is a global variable
 */
static volatile malloc_t base = {
    .first = (block_t*)MALLOC_HEAP_BOT,
    .last  = NULL,
    .flags = MALLOC_FLAG_CLOBBERED,
    .used  = 0
};

static block_t* find_free_block(size_t size);
static block_t* create_block(size_t size);
static void split_block(block_t* block, size_t size);
static void merge_blocks(block_t* block);
static void use_block(block_t* block);
static void free_block(block_t* block);

/**
 * try to find a free block of memory
 * if successful try to split that block to preserve the free memory
 * if no large enough block could be found try to create a new one
 * if a block could be created or one was found previously
 * use this block and add to the global usage counter
 *
 * @param  size minimum size of the requested memory block
 * @return returns NULL on failure otherwise a pointer to the memory
 */
void* malloc(size_t size){
    block_t* block = find_free_block(size);
    if(block){
        split_block(block,size);
    }else{
        block = create_block(size);
        if(!block)
            return NULL;
    }
    use_block(block);
    return MEM_FROM_BLOCK(block);
}

/**
 * free an allocated block of memory
 * does nothing if the block is not valid
 *
 * @param ptr pointer to memory block
 */
void free(void* ptr){
    if(!ptr)
        return;
    block_t* block = BLOCK_FROM_MEM(ptr);
    if(block->magic == MAGIC_USED){
        free_block(block);
        merge_blocks(block);
    }
}
/**
 * calculate nitems*size and check for overflow
 * allocate a block of memory this size
 * zero the allocated space
 *
 * @param nitems number of items to allocate
 * @param size   size of the individual items
 * @return returns NULL on failure otherwise a pointer to the memory
 */
void* calloc(size_t nitems, size_t size){
    size_t i = nitems*size;
    if (nitems != 0 && i / nitems != size)
        return NULL;
    char* mem = malloc(i);
    if(mem)
        for(;i;i--)
            mem[i]=0;
    return mem;
}
/**
 *
 * @param ptr
 * @param size new requested size
 * @return returns NULL on failure otherwise a pointer to the memory
 */
void* realloc(void* ptr, size_t size){
    if(!ptr)
        return NULL;
    block_t* blk = BLOCK_FROM_MEM(ptr);
    if(blk->size >= size)
        return ptr;
    if((blk->next->magic == MAGIC_FREE)&&((blk->size+blk->next->size)>=size)){
        blk->size += blk->next->size + sizeof(block_t);
        blk->next = blk->next->next;
        blk->next->prev = blk;
        return ptr;
    }
    char* mem = malloc(size);
    if(!mem)
        return ptr;
    char* orig = ptr;
    size_t i;
    for(i=0;i<blk->size;i++)
        mem[i] = orig[i];
    for(;i<size;i++)
        mem[i] = 0;
    free(ptr);
    return mem;
}


// first fit (fastest)
#if defined(MALLOC_USE_FIRST_FIT)
static block_t* find_free_block(size_t size){
    block_t* b = base.first;
    if(base.flags & MALLOC_FLAG_CLOBBERED)
        return NULL;
    while (b && !((b->magic == MAGIC_FREE) && b->size >= size ))
        b = b->next;
    return b;
}
#endif /* defined(MALLOC_USE_FIRST_FIT) */

// best fit O(n)
#if defined(MALLOC_USE_BEST_FIT)
static block_t* find_free_block(size_t size){
    block_t* b = base.first;
    block_t* best = NULL;
    if(base.flags & MALLOC_FLAG_CLOBBERED)
        return NULL;
    while (b){
        if(((b->magic == MAGIC_FREE) && b->size >= size)&&(best?(best->size > b->size):1))
            best = b;
        b = b->next;
    }
    return best;
}
#endif /* defined(MALLOC_USE_BEST_FIT) */

static block_t* create_block(size_t size){
    if(base.flags & MALLOC_FLAG_CLOBBERED){
        base.flags &= ~MALLOC_FLAG_CLOBBERED;
        base.first->prev = NULL;
        base.first->next = NULL;
        base.first->size = size;
        base.first->magic = MAGIC_FREE;
        return base.first;
    }
    if((base.last + size + sizeof(block_t)) <= (block_t*)MALLOC_HEAP_TOP){
        base.last->next = base.last + size + sizeof(block_t);
        base.last->next->prev = base.last;
        base.last = base.last->next;
        base.last->size = size;
        base.last->magic = MAGIC_FREE;
        base.last->next = NULL;  // should not be necessary
        return base.last;
    }else
        return NULL;
}

/**
 * Split block into smaller chunks
 * implementation is not required but
 * will help with fragmentation
 *
 * check if block is large enough
 * split block
 * set new dll pointers
 * set new sizes
 */
static void split_block(block_t* block, size_t size){

}

// Merge adjacent free blocks
static void merge_blocks(block_t* block){
    if(block->next->magic == MAGIC_FREE){
        block->size += block->next->size + sizeof(block_t);
        block->next = block->next->next;
        block->next->prev = block;
    }
    if(block->prev->magic == MAGIC_FREE){
        block->prev->size += block->size + sizeof(block_t);
        block->prev->next = block->next;
        block->next->prev = block->prev;
    }
}

static void use_block(block_t* block){
    base.used += block->size;
    block->magic = MAGIC_USED;
}

static void free_block(block_t* block){
    base.used -= block->size;
    block->magic = MAGIC_FREE;
}
