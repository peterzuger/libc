/**
 * @file   src/stdio/putc.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  7.21.7.7 The putc function
 */
#include <stdio.h>

int putc(int c, FILE* stream){
    return fputc(c, stream);
}
