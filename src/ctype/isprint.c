/**
 * @file   src/ctype/isprint.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief printing character classification
 *
 * The isprint function tests for any printing character including space (' ').
 */
int isprint(int c){
    return ((c>=' ')&&(c<='~'));
}
