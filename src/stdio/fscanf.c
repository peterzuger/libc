/**
 * @file   src/stdio/fscanf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  7.21.6.2 The fscanf function
 */
#include <stdio.h>
#include <stdarg.h>

int fscanf(FILE* __restrict__ stream, const char* __restrict__ format, ...){
    va_list arg;
    int r;

    va_start(arg, format);
    r = vfscanf(stream, format, arg);
    va_end(arg);

    return r;
}
