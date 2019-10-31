/**
 * @file   libc/src/stdlib/calloc.c
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  7.22.3.2 The calloc function
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
