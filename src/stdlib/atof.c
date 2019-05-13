/**
 * @file   src/stdlib/atof.c
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  7.22.1.1 The atof function
 */
#include <stdlib.h>
#include <macros/NULL.h>

double atof(const char* nptr){
    return strtod(nptr, NULL);
}
