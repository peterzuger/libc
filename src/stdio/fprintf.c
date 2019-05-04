/**
 * @file   fprintf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  fprintf() implementation
 */
#include <stdio.h>
#include <stdarg.h>

int fprintf(FILE* __restrict__ stream, const char* __restrict__ format, ...){
    va_list arg;
    int r;

    va_start(arg, format);
    r = vfprintf(stream, format, arg);
    va_end(arg);

    return r;
}
