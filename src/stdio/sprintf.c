/**
 * @file   src/stdio/sprintf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  7.21.6.6 The sprintf function
 */
#include <stdio.h>
#include <stdarg.h>

int sprintf(char* __restrict__ s, const char* __restrict__ format, ...){
    va_list arg;
    int r;

    va_start(arg, format);
    r = vsprintf(s, format, arg);
    va_end(arg);

    return r;
}
