/**
 * @file   src/stdio/perror.c
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  7.21.10.4 The perror function
 */
#include <stdio.h>
#include <string.h> // for strerror
#include <errno.h>  // for errno

void perror(const char* s){
    if(s){
        fputs(s,stderr);
        fputs(": ",stderr);
    }
    fputs(strerror(errno),stderr);
    fputs("\n",stderr);
}
