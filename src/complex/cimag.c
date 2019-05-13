/**
 * @file   src/complex/cimag.c
 * @author Peter Züger
 * @date   12.07.2018
 * @brief  7.3.9.2 The cimag functions
 */
#include <complex.h>

double cimag(double complex z){
    return __imag__ z;
}

float cimagf(float complex z){
    return __imag__ z;
}

long double cimagl(long double complex z){
    return __imag__ z;
}
