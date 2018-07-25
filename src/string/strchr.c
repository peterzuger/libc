/**
 * @file   strchr.c
 * @author Peter Zueger
 * @date   25.07.2018
 * @brief  find character in string
 */
#include <string.h>

char* strchr(const char* s, int c){
    unsigned char* p = (unsigned char*)s;

    while(*p)
        if(*p++ == (unsigned char)c)
            return (char*)p-1;

    return NULL;
}
