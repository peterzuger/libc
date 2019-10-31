/**
 * @file   libc/src/stdio/puts.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  7.21.7.9 The puts function
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
#include <stdio.h>

int puts(const char* s){
    while(*s){
        if(*s == putchar(*s))
            s++;
        else
            return EOF;
    }
    return putchar('\n');
}
