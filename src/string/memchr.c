/**
 * @file   libc/src/string/memchr.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.5.1 The memchr function
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

void* memchr(const void* s, int c, size_t n){
    unsigned char* p = (unsigned char*)s;
    while(n--)
        if(*p++ == (unsigned char)c)
            return p-1;
    return NULL;
}
