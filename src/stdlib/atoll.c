/**
 * @file   atoll.c
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  atoll() implementation
 */
#include <stdlib.h>
#include <macros/NULL.h>

long long int atoll(const char* nptr){
    return strtoll(nptr, NULL, 10);
}
