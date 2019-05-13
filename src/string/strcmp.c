/**
 * @file   src/string/strcmp.c
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  7.24.4.2 The strcmp function
 */
#include <string.h>

int strcmp(const char* s1, const char* s2){
    const unsigned char* l = (const unsigned char*)s1;
    const unsigned char* r = (const unsigned char*)s2;

    while( *l && *l == *r ) ++l, ++r;

    return ( *l > *r ) - ( *r  > *l );
}
