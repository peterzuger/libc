/**
 * @file   atol.c
 * @author Peter Zueger
 * @date   18.08.2018
 * @brief  atol() implementation
 */
#include <stdlib.h>
#include <macros/NULL.h>

long int atol(const char* nptr){
    return strtol(nptr, NULL, 10);
}
