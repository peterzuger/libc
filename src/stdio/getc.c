/**
 * @file   src/stdio/getc.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  7.21.7.5 The getc function
 */
#include <stdio.h>

int getc(FILE* stream){
    return fgetc(stream);
}
