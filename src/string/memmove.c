/**
 * @file   libc/src/string/memmove.c
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  7.24.2.2 The memmove function
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

void* memmove(void* s1, const void* s2, size_t n){
    unsigned char* d = (unsigned char*)s1;
    const unsigned char* s = (const unsigned char*)s2;

    if(d < s)
        return memcpy(s1, s2, n);

    while(n--)
        d[n] = s[n];

    return s1;
}
