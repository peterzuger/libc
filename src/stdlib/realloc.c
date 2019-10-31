/**
 * @file   libc/src/stdlib/realloc.c
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  7.22.3.5 The realloc function
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2019 Peter Züger.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdlib.h>
#include <macros/NULL.h>
#include "alloc.h"

/**
 * re-allocate memory
 * change the size of the requested memory block
 * does not currently shrink the allocated memory
 *
 * check if pointer is valid
 * get the block pointer from the pointer
 * if the block is large enough just return the original pointer
 * if the next block is free and has enough additional size
 * to extend the current one then do that
 * if all else fails malloc a new block copy the old data zero out the end
 * free the old block and return the new block
 *
 * @param ptr
 * @param size new requested size
 * @return returns NULL on failure otherwise a pointer to the memory
 */
void* realloc(void* ptr, size_t size){
    if(!ptr)
        return NULL;

    block_t* blk = BLOCK_FROM_MEM(ptr);

    extern char __heap_end__;

    // enough space already
    if(blk->size >= size)
        return ptr;

    // just make current block larger if it is the last one
    // does not clean the new memory --> TODO
    if((!blk->next) && ((((size_t)blk) + BLOCK_SIZE + size ) <=
                        ((size_t)&__heap_end__))){
        base.used -= blk->size;
        base.used += size;
        blk->size = size;
        return ptr;
    }

    // does not clean the new memory --> TODO
    if((blk->next->magic == MAGIC_FREE) &&
       ((blk->size + blk->next->size) >= size)){
        base.used += blk->next->size + BLOCK_SIZE;
        blk->size += blk->next->size + BLOCK_SIZE;
        blk->next = blk->next->next;
        blk->next->prev = blk;
        return ptr;
    }

    // just create a new block if it could not be extended
    char* mem = malloc(size);
    if(!mem)
        return ptr;

    // copy and clear memory
    char*  orig = ptr;
    size_t i;
    for(i = 0; i < blk->size; i++)
        mem[i] = orig[i];
    for(; i < size; i++)
        mem[i] = 0;
    free(ptr);
    return mem;
}
