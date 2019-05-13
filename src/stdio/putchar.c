/**
 * @file   src/stdio/putchar.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  7.21.7.8 The putchar function
 */
#include <stdio.h>

int putchar(int c){
    return putc(c,stdout);
}
