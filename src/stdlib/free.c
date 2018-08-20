/**
 * @file   free.c
 * @author Peter Zueger
 * @date   18.08.2018
 * @brief  free() implementation
 */
#include <stdlib.h>
#include "alloc.h"

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
