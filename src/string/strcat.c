/**
 * @file   src/string/strcat.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.3.1 The strcat function
 */
#include <string.h>

char* strcat(char* __restrict__ s1, const char* __restrict__ s2){
    unsigned char* l = (unsigned char*)s1;
    const unsigned char* r = (const unsigned char*)s2;

    while(*l++);
    while((*l++ = *r++));
    *l = '\0';

    return s1;
}
