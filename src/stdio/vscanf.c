/**
 * @file   vscanf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  vscanf() implementation
 */
#include <stdio.h>
#include <stdarg.h>

int vscanf(const char* __restrict__ format, va_list arg){
    return vfscanf(stdin, format, arg);
}
