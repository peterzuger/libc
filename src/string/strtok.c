/**
 * @file   src/string/strtok.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.5.8 The strtok function
 */
#include <string.h>

char* strtok(char* __restrict__ s1, const char* __restrict__ s2){
    static char* p;
    char* t;

    if(s1)
        p = s1;

    p += strspn(p,s2);
    t = p;

    p = strpbrk(p,s2);
    if(p)
        *p++ = '\0';

    return t;
}
