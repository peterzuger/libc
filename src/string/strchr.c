/**
 * @file   src/string/strchr.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.5.2 The strchr function
 */
#include <string.h>

char* strchr(const char* s, int c){
    unsigned char* p = (unsigned char*)s;

    while(*p)
        if(*p++ == (unsigned char)c)
            return (char*)p-1;

    return NULL;
}
