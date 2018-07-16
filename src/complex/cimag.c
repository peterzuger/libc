/**
 * @file   cimag.c
 * @author Peter Zueger
 * @date   12.07.2018
 * @brief  get the imaginary part of a complex number
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
