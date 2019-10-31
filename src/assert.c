/**
 * @file   libc/src/assert.c
 * @author Peter Züger
 * @date   08.02.2018
 * @brief  7.2.1.1 The assert macro
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
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

void __assert(const char* expr,const char* file,
              const char* line,const char* func){
    fputs("assertion failed: ",stderr);
    fputs(expr,stderr);
    fputs("\n\t in file: ",stderr);
    fputs(file,stderr);
    fputs("\n\t on line: ",stderr);
    fputs(line,stderr);
    fputs("\n\t in function: ",stderr);
    fputs(func,stderr);
    abort();
}
