/**
 * @file   sprintf.c
 * @author Peter Zueger
 * @date   26.07.2018
 * @brief  sprintf() implementation
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