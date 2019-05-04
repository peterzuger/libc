/**
 * @file   sscanf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  sscanf() implementation
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
