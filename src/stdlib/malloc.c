/**
 * @file   libc/src/stdlib/malloc.c
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  7.22.3.4 The malloc function
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
