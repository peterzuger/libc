/**
 * @file   creal.c
 * @author Peter Zueger
 * @date   12.07.2018
 * @brief  get the real part of a complex number
 */
#include <complex.h>

double creal(double complex z){
    return __real__ z;
}

float crealf(float complex z){
    return __real__ z;
}

long double creall(long double complex z){
    return __real__ z;
}
