/**
 * @file   strlen.c
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  string lenght function
 */
#include <string.h>

/**
 * simple strlen implementation O(n)
 * this checks every byte up to the end
 * can be optimized to check 4 bytes per loop
 */
size_t strlen(const char* s){
    size_t i = 0;
    for( i=0 ; s[i] ; i++ );
    return i;
}
