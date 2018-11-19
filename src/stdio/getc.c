/**
 * @file   getc.c
 * @author Peter Zueger
 * @date   14.11.2018
 * @brief  getc() implementation
 */
#include <stdio.h>

int getc(FILE* stream){
    return fgetc(stream);
}
