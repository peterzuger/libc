/**
 * @file   src/stdio/fwrite.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  7.21.8.2 The fwrite function
 */
#include <stdio.h>

size_t fwrite(const void* __restrict__ ptr, size_t size, size_t nmemb,
              FILE* __restrict__ stream){
    const unsigned char* p = (const unsigned char*)ptr;

    if(size == 0)
        return 0;
    for(size_t n = 0; n < nmemb; n++){
        for(size_t m = 0; m < size; m++){
            if(fputc(*p, stream) != *p)
                return n;
            p++;
        }
    }
    return nmemb;
}
