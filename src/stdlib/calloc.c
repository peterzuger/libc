/**
 * @file   calloc.c
 * @author Peter Zueger
 * @date   18.08.2018
 * @brief  calloc() implementation
 */
#include <stdlib.h>
#include "alloc.h"

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
    size_t i = nitems * size;
    if(nitems != 0 && i / nitems != size)
        return NULL;

    char* mem = malloc(i);
    if(mem)
        for(; i; i--)
            mem[i] = 0;
    return mem;
}
