/**
 * @file   src/inttypes/imaxdiv.c
 * @author Peter Züger
 * @date   22.07.2018
 * @breif  7.8.2.2 The imaxdiv function
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
