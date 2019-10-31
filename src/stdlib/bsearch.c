/**
 * @file   libc/src/stdlib/bsearch.c
 * @author Peter Züger
 * @date   16.07.2018
 * @brief  7.22.5.1 The bsearch function
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2019 Peter Züger.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
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
