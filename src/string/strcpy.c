/**
 * @file   strcpy.c
 * @author Peter Zueger
 * @date   25.07.2018
 * @brief  copy string
 */
#include <string.h>

char* strcpy(char* __restrict__ s1, const char* __restrict__ s2){
    char* p = s1;
    while((*s1++ = *s2++));
    return p;
}
