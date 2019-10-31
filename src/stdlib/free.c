/**
 * @file   libc/src/stdlib/free.c
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  7.22.3.3 The free function
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
