/**
 * @file   alloc.c
 * @author Peter Zueger
 * @date   08.02.2018
 * @brief  dynamic memory allocation
 */
#include <stdlib.h>
#include <config.h>
#include <types/NULL.h>

typedef struct block_t {
    struct block_t* prev;
    struct block_t* next;
    size_t size;
    uint32_t magic;
} block_t;
#define BLOCK_SIZE sizeofof(block_t)

#define MAGIC_USED (0x23456778)
#define MAGIC_FREE (0x35678923)

block_t* base = NULL;
block_t* top = NULL;

static block_t* find_free_block(size_t size);
static block_t* create_block(size_t size);
static void split_block(block_t* block);
static void merge_blocks(block_t* block);

void* malloc(size_t size){
    block_t* b = find_free_block(size);
    if(b->size >= (size+MIN_BLOCK_SIZE)){
        split_block(b);
    }else
        b = create_block(size);
    return b;
}
void free(void* ptr){
    ((block_t*)ptr)--;
    if(((block_t*)ptr)->magic == MAGIC_USED){
        ((block_t*)ptr)->magic == MAGIC_FREE;
        merge_blocks((block_t*)ptr);
    }
}
void* calloc(size_t nitems, size_t size){
    // missing overflow check
    size_t i = nitems*size;
    char mem = malloc(i);
    if(mem)
        for(;i;i--)
            mem[i]=0;
    return mem;
}
void* realloc(void* ptr, size_t size){
    block_t* blk = (block_t*)ptr-1;
    if(blk->size >= size) return ptr;
    if((blk->next.magic == MAGIC_FREE)&&((blk->size+blk->next.size)>=size)){
        blk->size += blk->next.size + BLOCK_SIZE;
        blk->next = blk->next.next;
        blk->next.prev = blk;
        return ptr;
    }
    char* mem = malloc(size);
    if(mem){
        char* orig = ptr;
        size_t i;
        for(i=0;i<blk->size;i++)
            mem[i] = orig[i];
        for(;i<size;i++)
            mem[i] = 0;
        free(ptr);
    }
    return
}

// first fit (fastest)
#if defined(MALLOC_USE_FIRST_FIT)
static block_t* find_free_block(size_t size){
    block_t b = base;
    while (b && !(b->free && b->size >= size ))
        b = b->next;
    return b;
}
#endif /* MALLOC_FIRST_FIT */

// best fit O(n)
#if defined(MALLOC_USE_BEST_FIT)
static block_t* find_free_block(size_t size){
    block_t* b = base;
    block_t* best = NULL;
    while (b){
        if((b->free && b->size >= size)&&(best?(best->size > b->size):1))
            best = b;
        b = b->next;
    }
    return best;
}
#endif /* MALLOC_BEST_FIT */

// create new blocks
static block_t* create_block(size_t size){
    if((top + size + BLOCK_SIZE) <= HEAP_TOP){
        top->next = top + size + BLOCK_SIZE;
        top->next.prev = top;
        top = top->next;
        top->size = size;
        top->magic = MAGIC_USED;
        top->next = NULL;  // should not be necessary
    }else
        return NULL;
}

// Split block into smaller chunks
// implementation is not required but
// will help with fragmentation
static void split_block(block_t* block, size_t size){

}

// Merge adjacent free blocks
static void merge_blocks(block_t* block){
    if(block->next.magic == MAGIC_FREE){
        block.size += block->next.size + BLOCK_SIZE;
        block->next = block->next.next;
        block->next.prev = block;
    }
    if(block->prev.magic == MAGIC_FREE){
        block->prev.size += block.size + BLOCK_SIZE;
        block.prev.next = block.next;
        block.next.prev = block.prev;
    }
}
