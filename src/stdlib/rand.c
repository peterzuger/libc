/**
 * @file   rand.c
 * @author Peter Zueger
 * @date   08.02.2018
 * @brief  random
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
