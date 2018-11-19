/**
 * @file   putc.c
 * @author Peter Zueger
 * @date   14.11.2018
 * @brief  putc() implementation
 */
#include <stdio.h>

int putc(int c, FILE* stream){
    return fputc(c, stream);
}
