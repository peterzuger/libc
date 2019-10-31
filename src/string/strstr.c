/**
 * @file   libc/src/string/strstr.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.5.7 The strstr function
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

char* strstr(const char* s1, const char* s2){
    const unsigned char* l = (const unsigned char*)s1;
    const unsigned char* r = (const unsigned char*)s2;
    const unsigned char* p;
    const unsigned char* o;

    while(*l){
        for(p = r,o = l;*p && *o;p++,o++)
            if(*p != *o)
                break;
        if(!(*p && *o))
            return (char*)l;
    }
    return NULL;
}
