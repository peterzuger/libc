/**
 * @file   libc/src/string/strrchr.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.5.5 The strrchr function
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

__attribute__((pure)) char* strrchr(const char* s, int c){
    unsigned char* p = (unsigned char*)s;
    unsigned char* l = NULL;

    while(*p)
        if(*p++ == (unsigned char)c)
            l = p - 1;

    return (char*)l;
}
