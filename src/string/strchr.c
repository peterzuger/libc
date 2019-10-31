/**
 * @file   libc/src/string/strchr.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.5.2 The strchr function
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

char* strchr(const char* s, int c){
    unsigned char* p = (unsigned char*)s;

    while(*p)
        if(*p++ == (unsigned char)c)
            return (char*)p-1;

    return NULL;
}
