/**
 * @file   src/stdio/puts.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  7.21.7.9 The puts function
 */
#include <stdio.h>

int puts(const char* s){
    while(*s){
        if(*s == putchar(*s))
            s++;
        else
            return EOF;
    }
    return putchar('\n');
}
