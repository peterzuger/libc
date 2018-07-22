/**
 * @file   memmove.c
 * @author Peter Zueger
 * @date   22.07.2018
 * @brief  memmove() implementation
 */
#include <string.h>

void* memmove(void* s1, void* s2, size_t n){
    unsigned char *d = (unsigned char*)s1;
    const unsigned char *s = (const unsigned char*)s2;

    if(d < s)
        return memcpy(s1, s2, n);

    while(n--)
        d[n] = s[n];

    return s1;
}
