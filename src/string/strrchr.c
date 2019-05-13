/**
 * @file   src/string/strrchr.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.5.5 The strrchr function
 */
#include <string.h>

char* strrchr(const char* s, int c){
    unsigned char* p = (unsigned char*)s;
    unsigned char* l = NULL;

    while(*p)
        if(*p++ == (unsigned char)c)
            l = p-1;

    return (char*)l;
}
