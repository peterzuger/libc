/**
 * @file   src/string/strncmp.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.4.4 The strncmp function
 */
#include <string.h>

int strncmp(const char* s1, const char* s2, size_t n){
    const unsigned char* l = (const unsigned char*)s1;
    const unsigned char* r = (const unsigned char*)s2;

    while(n--){
        if((*l != *r) || (!*l))
            return ( *l > *r ) - ( *r  > *l );
        l++;
        r++;
    }
    return 0;
}
