/**
 * @file   src/stdio/feof.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  7.21.10.2 The feof function
 */
#include <stdio.h>

int __attribute__((pure))feof(FILE* stream){
    return (int)stream->eof;
}
