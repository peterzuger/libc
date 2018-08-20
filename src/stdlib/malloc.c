/**
 * @file   malloc.c
 * @author Peter Zueger
 * @date   18.08.2018
 * @brief  malloc() implementation
 */
#include <stdlib.h>
#include <types/size_t.h>
#include "alloc.h"

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
        split_block(block, size);
    }else{
        block = create_block(size);
        if(!block)
            return NULL;
    }

    use_block(block);
    return MEM_FROM_BLOCK(block);
}
