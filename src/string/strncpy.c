/**
 * @file   src/string/strncpy.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.2.4 The strncpy function
 */
#include <string.h>

char* strncpy(char* __restrict__ s1, const char* __restrict__ s2, size_t n){
    while(n--)
        s1[n] = s2[n];
    return s1;
}
