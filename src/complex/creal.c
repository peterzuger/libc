/**
 * @file   src/complex/creal.c
 * @author Peter Züger
 * @date   12.07.2018
 * @brief  7.3.9.6 The creal functions
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
