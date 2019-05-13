/**
 * @file   src/string/strcspn.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.5.3 The strcspn function
 */
#include <string.h>

size_t strcspn(const char* s1, const char* s2){
    const unsigned char* l = (const unsigned char*)s1;
    const unsigned char* r = (const unsigned char*)s2;
    const unsigned char* p;
    size_t n = 0;

    while(*l){
        for(p = r;*p;p++)
            if(*l == *p)
                return n;
        l++;
    }
    return n;
}
