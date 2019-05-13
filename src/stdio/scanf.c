/**
 * @file   src/stdio/scanf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  7.21.6.4 The scanf function
 */
#include <stdio.h>
#include <stdarg.h>

int scanf(const char* __restrict__ format, ...){
    va_list arg;
    int r;

    va_start(arg, format);
    r = vscanf(format, arg);
    va_end(arg);

    return r;
}
