/**
 * @file   strcspn.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  lengt of string only out of span
 */
#include <string.h>

size_t strspn(const char* s1, const char* s2){
    const unsigned char* l = (const unsigned char*)s1;
    const unsigned char* r = (const unsigned char*)s2;
    const unsigned char* p;
    size_t n = 0;
    int f = 0;

    while(*l){
        for(p = r;*p;p++)
            if(*l == *p){
                f = 1;
                break;
            }
        if(!f)
            return n;
        f = 0;
        n++;
        l++;
    }
    return n;
}
