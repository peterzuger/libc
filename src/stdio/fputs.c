/**
 * @file   src/stdio/fputs.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  7.21.7.4 The fputs function
 */
#include <stdio.h>

int fputs(const char* __restrict__ s, FILE* __restrict__ stream){
    while(*s)
        if(fputc(*s++, stream) == EOF)
            return EOF;
    return 1;
}
