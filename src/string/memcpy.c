/**
 * @file   libc/src/string/memcpy.c
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  7.24.2.1 The memcpy function
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

void* memcpy(void* __restrict__ s1, const void* __restrict__ s2, size_t n){
    unsigned char* d = (unsigned char*)s1;
    const unsigned char* s = (const unsigned char*)s2;

    while(n--)
        *d++ = *s++;

    return s1;
}
