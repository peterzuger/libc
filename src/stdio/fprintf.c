/**
 * @file   libc/src/stdio/fprintf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  7.21.6.1 The fprintf function
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
#include <stdarg.h>

int fprintf(FILE* __restrict__ stream, const char* __restrict__ format, ...){
    va_list arg;
    int r;

    va_start(arg, format);
    r = vfprintf(stream, format, arg);
    va_end(arg);

    return r;
}
