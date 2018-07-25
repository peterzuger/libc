/**
 * @file   wchar.h
 * @author Peter Zueger
 * @date   07.02.2018
 * @brief  wide-character handling
 */
#ifndef __WCHAR_H__
#define __WCHAR_H__

#include <types/FILE.h>
#include <types/va_list.h>
#include <types/size_t.h>
#include <types/wchar_t.h>
#include <types/mbstate_t.h>
#include <types/wint_t.h>
#include <types/tm.h>

#include <macros/NULL.h>
#include <macros/WEOF.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// Formatted wide character input/output functions
int fwprintf(FILE* __restrict__ stream,
             const wchar_t* __restrict__ format, ...);
int fwscanf(FILE* __restrict__ stream,
            const wchar_t* __restrict__ format, ...);
int swprintf(wchar_t* __restrict__ s, size_t n,
             const wchar_t* __restrict__ format, ...);
int swscanf(const wchar_t* __restrict__ s,
            const wchar_t* __restrict__ format, ...);
int vfwprintf(FILE* __restrict__ stream,
              const wchar_t* __restrict__ format, va_list arg);
int vfwscanf(FILE* __restrict__ stream,
             const wchar_t* __restrict__ format, va_list arg);
int vswprintf(wchar_t* __restrict__ s, size_t n,
              const wchar_t* __restrict__ format,
              va_list arg);
int vswscanf(const wchar_t* __restrict__ s,
             const wchar_t* __restrict__ format, va_list arg);
int vwprintf(const wchar_t* __restrict__ format, va_list arg);
int vwscanf(const wchar_t* __restrict__ format, va_list arg);
int wprintf(const wchar_t* __restrict__ format, ...);
int wscanf(const wchar_t* __restrict__ format, ...);


// Wide character input/output functions
wint_t fgetwc(FILE* stream);
wchar_t* fgetws(wchar_t* __restrict__ s, int n, FILE* __restrict__ stream);
wint_t fputwc(wchar_t c, FILE *stream);
int fputws(const wchar_t* __restrict__ s, FILE* __restrict__ stream);
int fwide(FILE* stream, int mode);
wint_t getwc(FILE* stream);
wint_t getwchar(void);
wint_t putwc(wchar_t c, FILE* stream);
wint_t putwchar(wchar_t c);
wint_t ungetwc(wint_t c, FILE* stream);


// General wide string utilities
// Wide string numeric conversion functions
double wcstod(const wchar_t* __restrict__ nptr,
              wchar_t** __restrict__ endptr);
float wcstof(const wchar_t* __restrict__ nptr,
             wchar_t** __restrict__ endptr);
long double wcstold(const wchar_t* __restrict__ nptr,
                    wchar_t** __restrict__ endptr);

long int wcstol(const wchar_t* __restrict__ nptr,
                wchar_t** __restrict__ endptr, int base);
long long int wcstoll(const wchar_t* __restrict__ nptr,
                      wchar_t** __restrict__ endptr, int base);
unsigned long int wcstoul(const wchar_t* __restrict__ nptr,
                          wchar_t** __restrict__ endptr, int base);
unsigned long long int wcstoull(const wchar_t* __restrict__ nptr,
                                wchar_t** __restrict__ endptr, int base);


// Wide string copying functions
wchar_t* wcscpy(wchar_t* __restrict__ s1,
                const wchar_t* __restrict__ s2);
wchar_t* wcsncpy(wchar_t* __restrict__ s1,
                 const wchar_t* __restrict__ s2, size_t n);
wchar_t* wmemcpy(wchar_t* __restrict__ s1,
                 const wchar_t* __restrict__ s2, size_t n);
wchar_t* wmemmove(wchar_t* s1, const wchar_t* s2, size_t n);


// Wide string concatenation functions
wchar_t* wcscat(wchar_t* __restrict__ s1,
                const wchar_t* __restrict__ s2);
wchar_t* wcsncat(wchar_t* __restrict__ s1,
                 const wchar_t* __restrict__ s2, size_t n);


// Wide string comparison functions
int wcscmp(const wchar_t* s1, const wchar_t* s2);
int wcscoll(const wchar_t* s1, const wchar_t* s2);
int wcsncmp(const wchar_t* s1, const wchar_t* s2, size_t n);
size_t wcsxfrm(wchar_t* __restrict__ s1,
               const wchar_t* __restrict__ s2, size_t n);
int wmemcmp(const wchar_t* s1, const wchar_t* s2, size_t n);


// Wide string search functions
wchar_t* wcschr(const wchar_t* s, wchar_t c);
size_t wcscspn(const wchar_t* s1, const wchar_t* s2);
wchar_t* wcspbrk(const wchar_t* s1, const wchar_t* s2);
wchar_t* wcsrchr(const wchar_t* s, wchar_t c);
size_t wcsspn(const wchar_t* s1, const wchar_t* s2);
wchar_t* wcsstr(const wchar_t* s1, const wchar_t* s2);
wchar_t* wcstok(wchar_t* __restrict__ s1,
                const wchar_t* __restrict__ s2,
                wchar_t** __restrict__ ptr);
wchar_t* wmemchr(const wchar_t* s, wchar_t c, size_t n);


// Miscellaneous functions
size_t wcslen(const wchar_t* s);
wchar_t* wmemset(wchar_t* s, wchar_t c, size_t n);


// Wide character time conversion functions
size_t wcsftime(wchar_t* __restrict__ s, size_t maxsize,
                const wchar_t* __restrict__ format,
                const struct tm* __restrict__ timeptr);


// Extended multibyte/wide character conversion utilities
// Single-byte/wide character conversion functions
wint_t btowc(int c);
int wctob(wint_t c);

// Conversion state functions
int mbsinit(const mbstate_t *ps);

// Restartable multibyte/wide character conversion functions
size_t mbrlen(const char* __restrict__ s, size_t n,
              mbstate_t* __restrict__ ps);
size_t mbrtowc(wchar_t* __restrict__ pwc,
               const char* __restrict__ s, size_t n,
               mbstate_t* __restrict__ ps);
size_t wcrtomb(char* __restrict__ s, wchar_t wc,
               mbstate_t* __restrict__ ps);

// Restartable multibyte/wide string conversion functions
size_t mbsrtowcs(wchar_t* __restrict__ dst,
                 const char** __restrict__ src, size_t len,
                 mbstate_t* __restrict__ ps);
size_t wcsrtombs(char* __restrict__ dst,
                 const wchar_t** __restrict__ src, size_t len,
                 mbstate_t* __restrict__ ps);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __WCHAR_H___ */
