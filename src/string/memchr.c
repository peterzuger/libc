/**
 * @file   src/string/memchr.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.5.1 The memchr function
 */
#include <string.h>

void* memchr(const void* s, int c, size_t n){
    unsigned char* p = (unsigned char*)s;
    while(n--)
        if(*p++ == (unsigned char)c)
            return p-1;
    return NULL;
}
