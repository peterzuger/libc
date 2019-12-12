/**
 * @file   libc/include/stdlib.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  General utilities
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
#ifndef __STDLIB_H__
#define __STDLIB_H__

#include <stdnoreturn.h>

#include <types/size_t.h>
#include <types/wchar_t.h>
#include <types/div_t.h>
#include <types/ldiv_t.h>
#include <types/lldiv_t.h>

#include <macros/NULL.h>
#include <macros/EXIT_FAILURE.h>
#include <macros/EXIT_SUCCESS.h>
#include <macros/RAND_MAX.h>
#include <macros/MB_CUR_MAX.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.22.1 Numeric conversion functions
double atof(const char* nptr);
int atoi(const char* nptr);
long int atol(const char* nptr);
long long int atoll(const char* nptr);
double strtod(const char* __restrict__ nptr, char** __restrict__ endptr);
float strtof(const char* __restrict__ nptr, char** __restrict__ endptr);
long double strtold(const char* __restrict__ nptr, char** __restrict__ endptr);
long int strtol(const char* __restrict__ nptr,char** __restrict__ endptr, int base);
long long int strtoll(const char* __restrict__ nptr,
                      char** __restrict__ endptr, int base);
unsigned long int strtoul(const char* __restrict__ nptr,
                          char** __restrict__ endptr, int base);
unsigned long long int strtoull(const char* __restrict__ nptr,
                                char** __restrict__ endptr, int base);


// 7.22.2 Pseudo-random sequence generation functions
int rand(void);
void srand(unsigned int seed);


// 7.22.3 Memory management functions
void* aligned_alloc(size_t alignment, size_t size);
void* calloc(size_t nmemb, size_t size);
void  free(void* ptr);
void* malloc(size_t size);
void* realloc(void* ptr, size_t size);


// 7.22.4 Communication with the environment
_Noreturn void abort(void);
int atexit(void (*func)(void));
int at_quick_exit(void (*func)(void));
_Noreturn void exit(int status);
_Noreturn void _Exit(int status);
char* getenv(const char* name);
_Noreturn void quick_exit(int status);
int system(const char *string);


// 7.22.5 Searching and sorting utilities
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size,
              int (*compar)(const void*, const void *));
void qsort(void* base, size_t nmemb, size_t size,
           int (*compar)(const void*, const void *));


// 7.22.6 Integer arithmetic functions
int abs(int j);
long int labs(long int j);
long long int llabs(long long int j);
div_t div(int numer, int denom);
ldiv_t ldiv(long int numer, long int denom);
lldiv_t lldiv(long long int numer, long long int denom);


// 7.22.7 Multibyte/wide character conversion functions
int mblen(const char* s, size_t n);
int mbtowc(wchar_t* __restrict__ pwc, const char* __restrict__ s, size_t n);
int wctomb(char* s, wchar_t wc);


// 7.22.8 Multibyte/wide string conversion functions
size_t mbstowcs(wchar_t* __restrict__ pwcs, const char* __restrict__ s, size_t n);
size_t wcstombs(char* __restrict__ s, const wchar_t* __restrict__ pwcs, size_t n);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __STDLIB_H__ */
