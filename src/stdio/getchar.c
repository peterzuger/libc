/**
 * @file   src/stdio/getchar.c
 * @author Peter Züger
 * @date   26.07.2018
 * @brief  7.21.7.6 The getchar function
 */
#include <stdio.h>

int getchar(void){
    return getc(stdin);
}
