/**
 * @file   getchar.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  getchar() implementation
 */
#include <stdio.h>

int getchar(void){
    return getc(stdin);
}
