/**
 * @file   imaxdiv.c
 * @author Peter Zueger
 * @date   22.07.2018
 * @breif  imax_t division
 */
#include <inttypes.h>

imaxdiv_t imaxdiv(intmax_t numer, intmax_t denom){
    imaxdiv_t result;

    result.quot = numer / denom;
    result.rem = numer % denom;

    if (numer >= 0 && result.rem < 0){
        ++result.quot;
        result.rem -= denom;
    }

    return result;
}
