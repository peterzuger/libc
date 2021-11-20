/**
 * @file   libc/src/wchar/wcrtomb.c
 * @author Peter Züger
 * @date   20.11.2021
 * @brief  7.29.6.3.3 The wcrtomb function
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2021 Peter Züger.
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
#include <errno.h>
#include <wchar.h>

size_t wcrtomb(char* __restrict__ s, wchar_t wc,
               mbstate_t* __restrict__ ps){
    if((size_t)wc >= 0x100){
        errno = EILSEQ;
        return (size_t)-1;
    }

    *s = (char)wc;
    return 0;
}
