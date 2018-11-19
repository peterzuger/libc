/**
 * @file   fread.c
 * @author Peter Zueger
 * @date   14.11.2018
 * @brief  fread() implementation
 */
#include <stdio.h>

size_t fread(void* __restrict__ ptr, size_t size, size_t nmemb,
             FILE* __restrict__ stream){
    unsigned char* p = (unsigned char*)ptr;

    if(size == 0)
        return 0;
    for(size_t n = 0; n < nmemb; n++){
        for(size_t m = 0; m < size; m++){
            int c = (unsigned char)fgetc(stream);
            if(c == EOF)
                return n;
            *p++ = (unsigned char)c;
        }
    }
    return nmemb;
}
