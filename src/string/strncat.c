/**
 * @file   strncat.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  concatenate strings
 */
#include <string.h>

char* strncat(char* __restrict__ s1, const char* __restrict__ s2, size_t n){
    char* p = s1;

    while(*s1++);
    while(n-- && *s2)
        *s1++ = *s2++;
    *s1 = '\0';

    return p;
}
