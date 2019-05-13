/**
 * @file   src/stdlib/atoll.c
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  7.22.1.2 The atoi, atol, and atoll functions
 */
#include <stdlib.h>
#include <macros/NULL.h>

long long int atoll(const char* nptr){
    return strtoll(nptr, NULL, 10);
}
