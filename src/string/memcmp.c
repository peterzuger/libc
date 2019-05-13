/**
 * @file   src/string/memcmp.c
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  7.24.4.1 The memcmp function
 */
#include <string.h>

int memcmp(const void* s1, const void* s2, size_t n){
    const unsigned char* l = (const unsigned char*)s1;
    const unsigned char* r = (const unsigned char*)s2;

    while(n--){
        if(*l++ != *r++)
            return l[-1] < r[-1] ? -1 : 1;
    }
    return 0;
}
