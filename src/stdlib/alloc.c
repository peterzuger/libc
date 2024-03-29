/**
 * @file   libc/src/stdlib/alloc.c
 * @author Peter Züger
 * @date   08.02.2018
 * @brief  dynamic memory allocation
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
#include <__config.h>
#include <errno.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#include <syscall.h>

#include "alloc.h"

/**
 * this struct contains the global inforamtion needed by this implementation
 */
volatile malloc_t base;

void __libc_init_malloc(void){
    memset((void*)&base, 0, sizeof(base));

    base.end = (block_t*)(_brk(NULL));
    base.first = base.last = NULL;
}

block_t* create_block(size_t size){
    // round size up to the next power of 2 but at least 32
    if(size <= 32)
        size = 32;
    else
        size = (size_t)(1 << ((sizeof(size_t) * 8) - (unsigned)__builtin_clz((unsigned int)size - 1)));

    // TODO: create a new block

    errno = ENOMEM;
    return NULL;
}

// first fit (fastest)
#if defined(MALLOC_USE_FIRST_FIT)
block_t* find_free_block(size_t size){
    block_t* b = base.first;
    while(b && !((b->magic == MAGIC_FREE) && b->size >= size))
        b = b->next;
    return b;
}
#endif /* defined(MALLOC_USE_FIRST_FIT) */

// best fit O(n)
#if defined(MALLOC_USE_BEST_FIT)
block_t* find_free_block(size_t size){
    block_t* b    = base.first;
    block_t* best = NULL;
    while(b){
        if(((b->magic == MAGIC_FREE) && b->size >= size) &&
           (best ? (best->size > b->size) : 1))
            best = b;
        b = b->next;
    }
    return best;
}
#endif /* defined(MALLOC_USE_BEST_FIT) */

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
void split_block(block_t* block, size_t size){
    (void)block;
    (void)size;
}

// Merge adjacent free blocks
void merge_blocks(block_t* block){
    if(block->next && (block->next->magic == MAGIC_FREE)){
        block->size += block->next->size + BLOCK_SIZE;
        block->next       = block->next->next;
        block->next->prev = block;
    }
    if(block->prev && (block->prev->magic == MAGIC_FREE)){
        block->prev->size += block->size + BLOCK_SIZE;
        block->prev->next = block->next;
        if(block->next)
            block->next->prev = block->prev;
    }
}

void use_block(block_t* block){
    base.used += block->size;
    block->magic = MAGIC_USED;
}

void free_block(block_t* block){
    base.used -= block->size;
    block->magic = MAGIC_FREE;
}
