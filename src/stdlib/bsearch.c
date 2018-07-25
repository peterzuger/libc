/**
 * @file   bsearch.c
 * @author Peter Zueger
 * @date   16.07.2018
 * @brief  binary search implementation
 */
#include <stdlib.h>
#include <macros/NULL.h>

/**
 * do a binary search in base for key
 * base has nmemb elements of size bytes each
 *
 * @param key    search key
 * @param base   pointer to base of array to search
 * @param nmemb  sizeof array
 * @param size   sizeof(typeof(key))
 * @param compar function pointer to comparison function
 * @return NULL if key was not found otherwise pointer to the element
 */
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size,
              int (*compar)(const void*, const void *)){
    size_t l = 0;
    size_t u = nmemb;
    size_t idx;
    void* p;
    int c;

    while(l<u){
        idx = (l + u) / 2;
        p = (void *) (((const char *) base) + (idx * size));
        c = (*compar) (key, p);
        if(c<0)
            u = idx;
        else if(c>0)
            l = idx+1;
        else
            return (void*)p;
    }
    return NULL;
}
