/**
 * @file   src/string/memset.c
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  7.24.6.1 The memset function
 */
#include <string.h>

void* memset(void* s, int c, size_t n){
    unsigned char* p = s;
    while(n--)
        *p++ = (unsigned char)c;
    return s;
}
