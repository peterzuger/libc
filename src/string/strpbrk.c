/**
 * @file   strpbrk.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  pointer to first occurence of a span in string
 */
#include <string.h>

char* strpbrk(const char* s1, const char* s2){
    const unsigned char* l = (const unsigned char*)s1;
    const unsigned char* r = (const unsigned char*)s2;
    const unsigned char* p;

    while(*l){
        for(p = r;*p;p++)
            if(*l == *p)
                return (char*)l;
        l++;
    }
    return NULL;
}
