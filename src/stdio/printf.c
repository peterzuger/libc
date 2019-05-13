/**
 * @file   src/stdio/printf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  7.21.6.3 The printf function
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
