/**
 * @file   printf.c
 * @author Peter Zueger
 * @date   26.07.2018
 * @brief  printf() implementation
 */
#include <stdio.h>
#include <stdarg.h>

int printf(const char* __restrict__ format, ...){
    va_list arg;
    int r;

    va_start(arg, format);
    r = vprintf(format, arg);
    va_end(arg);

    return r;
}
