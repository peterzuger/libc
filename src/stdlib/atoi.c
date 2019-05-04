/**
 * @file   atoi.c
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  atoi() implementation
 */
#include <stdlib.h>
#include <macros/NULL.h>

int atoi(const char* nptr){
    return strtol(nptr, NULL, 10);
}
