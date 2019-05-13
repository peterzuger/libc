/**
 * @file   src/stdio/snprintf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  7.21.6.5 The snprintf function
 */
#include <stdio.h>
#include <stdarg.h>

int snprintf(char* __restrict__ s, size_t n, const char* __restrict__ format, ...){
    va_list arg;
    int r;

    va_start(arg, format);
    r = vsnprintf(s, n, format, arg);
    va_end(arg);

    return r;
}
