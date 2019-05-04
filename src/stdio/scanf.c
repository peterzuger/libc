/**
 * @file   scanf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  scanf() implementation
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
