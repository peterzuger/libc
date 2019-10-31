/**
 * @file   libc/src/stdio/fputs.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  7.21.7.4 The fputs function
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

int fputs(const char* __restrict__ s, FILE* __restrict__ stream){
    while(*s)
        if(fputc(*s++, stream) == EOF)
            return EOF;
    return 1;
}
