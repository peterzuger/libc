/**
 * @file   libc/src/string/strlen.c
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  7.24.6.3 The strlen function
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
#include <string.h>

/**
 * simple strlen implementation O(n)
 * this checks every byte up to the end
 * can be optimized to check 4 bytes per loop
 */
size_t strlen(const char* s){
    size_t i = 0;
    for( i=0 ; s[i] ; i++ );
    return i;
}
