/**
 * @file   src/stdio/fgets.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  7.21.7.2 The fgets function
 */
#include <stdio.h>

char *fgets(char* __restrict__ s, int n, FILE* __restrict__ stream){
    for(int m = 0; m < n; m++){
        int c = fgetc(stream);
        if(c == EOF)
            return NULL;
        s[m] = (char)c;
        if(c == '\n')
            return s;
    }
    return s;
}
