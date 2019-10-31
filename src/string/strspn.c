/**
 * @file   libc/src/string/strcspn.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.5.6 The strspn function
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

size_t strspn(const char* s1, const char* s2){
    const unsigned char* l = (const unsigned char*)s1;
    const unsigned char* r = (const unsigned char*)s2;
    const unsigned char* p;
    size_t n = 0;
    int f = 0;

    while(*l){
        for(p = r;*p;p++)
            if(*l == *p){
                f = 1;
                break;
            }
        if(!f)
            return n;
        f = 0;
        n++;
        l++;
    }
    return n;
}
