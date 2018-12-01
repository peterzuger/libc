/**
 * @file   feof.c
 * @author Peter Zueger
 * @date   14.11.2018
 * @brief  feof() implementation
 */
#include <stdio.h>

int __attribute__((pure))feof(FILE* stream){
    return (int)stream->eof;
}
