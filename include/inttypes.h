/**
 * @file   libc/include/inttypes.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Format conversion of integer types
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
#ifndef __INTTYPES_H__
#define __INTTYPES_H__

#include <stdint.h>

#include <types/imaxdiv_t.h>
#include <types/wchar_t.h>

#include <macros/printf_format.h>
#include <macros/scanf_format.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.8.2 Functions for greatest-width integer types
intmax_t imaxabs(intmax_t j);
imaxdiv_t imaxdiv(intmax_t numer, intmax_t denom);

intmax_t strtoimax(const char* __restrict__ nptr,
                   char** __restrict__ endptr, int base);
uintmax_t strtoumax(const char* __restrict__ nptr,
                    char** __restrict__ endptr, int base);

intmax_t wcstoimax(const wchar_t* __restrict__ nptr,
                   wchar_t** __restrict__ endptr, int base);
uintmax_t wcstoumax(const wchar_t* __restrict__ nptr,
                    wchar_t** __restrict__ endptr, int base);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __INTTYPES_H___ */
