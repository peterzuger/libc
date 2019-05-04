/**
 * @file   putchar.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  putchar() implementation
 */
#include <stdio.h>

int putchar(int c){
    return putc(c,stdout);
}
