/**
 * @file   src/string/strcpy.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.2.3 The strcpy function
 */
#include <string.h>

char* strcpy(char* __restrict__ s1, const char* __restrict__ s2){
    char* p = s1;
    while((*s1++ = *s2++));
    return p;
}
