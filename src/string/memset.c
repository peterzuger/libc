/**
 * @file   memset.c
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  memset() implementation
 */
#include <string.h>

void* memset(void* s, int c, size_t n){
    unsigned char* p = s;
    while(n--)
        *p++ = (unsigned char)c;
    return s;
}
