/**
 * @file   src/stdio/sscanf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  7.21.6.7 The sscanf function
 */
#include <stdio.h>
#include <stdarg.h>

int sscanf(const char* __restrict__ s, const char* __restrict__ format, ...){
    va_list arg;
    int r;

    va_start(arg, format);
    r = vsscanf(s, format, arg);
    va_end(arg);

    return r;
}
