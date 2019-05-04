/**
 * @file   vprintf.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  vprintf() implementation
 */
#include <stdio.h>
#include <stdarg.h>

int vprintf(const char* __restrict__ format, va_list arg){
    return vfprintf(stdout, format, arg);
}
