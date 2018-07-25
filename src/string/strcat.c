/**
 * @file   strcat.c
 * @author Peter Zueger
 * @date   25.07.2018
 * @brief  concatenate strings
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
