/**
 * @file   stdlib.h
 * @author Peter Zueger
 * @date   07.02.2018
 * @brief  standard library definitions
 */
#ifndef __STDLIB_H__
#define __STDLIB_H__

#include <types/size_t.h>
#include <types/wchar_t.h>
#include <types/div_t.h>
#include <types/ldiv_t.h>
#include <types/lldiv_t.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


double atof(const char *nptr);
int atoi(const char *nptr);
long int atol(const char *nptr);
long long int atoll(const char *nptr);
double strtod(const char * __restrict__ nptr, char ** __restrict__ endptr);
float strtof(const char * __restrict__ nptr, char ** __restrict__ endptr);
long double strtold(const char * __restrict__ nptr, char ** __restrict__ endptr);
long int strtol(const char * __restrict__ nptr,char ** __restrict__ endptr, int base);
long long int strtoll(const char * __restrict__ nptr,
                      char ** __restrict__ endptr, int base);
unsigned long int strtoul(const char * __restrict__ nptr,
                          char ** __restrict__ endptr, int base);
unsigned long long int strtoull(const char * __restrict__ nptr,
                                char ** __restrict__ endptr, int base);

int rand(void);
void srand(unsigned int seed);

// alloc
void* aligned_alloc(size_t alignment, size_t size);
void* calloc(size_t nmemb, size_t size);
void  free(void *ptr);
void* malloc(size_t size);
void* realloc(void *ptr, size_t size);

__attribute__((noreturn)) void abort(void);
int atexit(void (*func)(void));
int at_quick_exit(void (*func)(void));
__attribute__((noreturn)) void exit(int status);
__attribute__((noreturn)) void _Exit(int status);
char *getenv(const char *name);
__attribute__((noreturn)) void quick_exit(int status);
int system(const char *string);

void *bsearch(const void *key, const void *base, size_t nmemb, size_t size,
              int (*compar)(const void *, const void *));
void qsort(void *base, size_t nmemb, size_t size,
           int (*compar)(const void *, const void *));

int abs(int j);
long int labs(long int j);
long long int llabs(long long int j);
div_t div(int numer, int denom);
ldiv_t ldiv(long int numer, long int denom);
lldiv_t lldiv(long long int numer, long long int denom);

int mblen(const char *s, size_t n);
int mbtowc(wchar_t * __restrict__ pwc, const char * __restrict__ s, size_t n);
int wctomb(char *s, wchar_t wc);
size_t mbstowcs(wchar_t * __restrict__ pwcs, const char * __restrict__ s, size_t n);
size_t wcstombs(char * __restrict__ s, const wchar_t * __restrict__ pwcs, size_t n);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __STDLIB_H__ */
