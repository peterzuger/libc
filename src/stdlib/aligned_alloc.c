/**
 * @file   libc/src/stdlib/aligned_alloc.c
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  7.22.3.1 The aligned_alloc function
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
