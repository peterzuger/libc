/**
 * @file   src/string/memcpy.c
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  7.24.2.1 The memcpy function
 */
#include <string.h>

void* memcpy(void* __restrict__ s1, const void* __restrict__ s2, size_t n){
    unsigned char* d = (unsigned char*)s1;
    const unsigned char* s = (const unsigned char*)s2;

    while(n--)
        *d++ = *s++;

    return s1;
}
