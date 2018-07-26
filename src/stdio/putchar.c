/**
 * @file   putchar.c
 * @author Peter Zueger
 * @date   26.07.2018
 * @brief  putchar() implementation
 */
#include <stdio.h>

int putchar(int c){
    return putc(c,stdout);
}
