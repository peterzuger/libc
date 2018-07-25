/**
 * @file   strstr.c
 * @author Peter Zueger
 * @date   25.07.2018
 * @brief  locate substring
 */
#include <string.h>

char* strstr(const char* s1, const char* s2){
    const unsigned char* l = (const unsigned char*)s1;
    const unsigned char* r = (const unsigned char*)s2;
    const unsigned char* p;
    const unsigned char* o;

    while(*l){
        for(p = r,o = l;*p && *o;p++,o++)
            if(*p != *o)
                break;
        if(!(*p && *o))
            return (char*)l;
    }
    return NULL;
}
