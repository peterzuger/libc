/**
 * @file   abs.c
 * @author Peter Züger
 * @date   16.07.2018
 * @breif  absolute value
 */
#include <stdlib.h>

int abs(int j){
    return j < 0 ? -j : j;
}

long int labs(long int j){
    return j < 0 ? -j : j;
}

long long int llabs(long long int j){
    return j < 0 ? -j : j;
}
