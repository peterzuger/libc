/**
 * @file   src/stdlib/rand.c
 * @author Peter Züger
 * @date   08.02.2018
 * @brief  7.22.2.1 The rand function
 * @brief  7.22.2.2 The srand function
 */
#include <stdlib.h>

static unsigned long int __rand_next = 1;

// RAND_MAX assumed to be 32767
int rand(void){
    __rand_next = __rand_next * 1103515245 + 12345;
    return (unsigned int)(__rand_next/65536) % 32768;
}

void srand(unsigned int seed){
    __rand_next = seed;
}
