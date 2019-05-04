/**
 * @file   fputs.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  fputs() implementation
 */
#include <stdio.h>

int fputs(const char* __restrict__ s, FILE* __restrict__ stream){
    while(*s)
        if(fputc(*s++, stream) == EOF)
            return EOF;
    return 1;
}
