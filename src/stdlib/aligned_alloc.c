/**
 * @file   aligned_alloc.c
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  aligned_alloc() implementation
 */
#include <stdlib.h>
#include "alloc.h"

/**
 * dont try to find a block of memory
 * check if requested alignement is valid
 * create a new block with the specified alignement
 * use this block and add to the global usage counter
 *
 * @note unimplemented always fails ...
 *
 * @param  size minimum size of the requested memory block
 * @return returns NULL on failure otherwise a pointer to the memory
 */
void* aligned_alloc(size_t alignment, size_t size){
    (void)alignment;
    (void)size;
    return NULL;
}
