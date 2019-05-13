/**
 * @file   src/stdlib/div.c
 * @author Peter Züger
 * @date   16.07.2018
 * @breif  7.22.6.2 The div, ldiv, and lldiv functions
 */
#include <stdlib.h>

div_t div(int numer, int denom){
    div_t result;

    result.quot = numer / denom;
    result.rem = numer % denom;

    if (numer >= 0 && result.rem < 0){
        ++result.quot;
        result.rem -= denom;
    }

    return result;
}

ldiv_t ldiv(long int numer, long int denom){
    ldiv_t result;

    result.quot = numer / denom;
    result.rem = numer % denom;

    if (numer >= 0 && result.rem < 0){
        ++result.quot;
        result.rem -= denom;
    }

    return result;
}

lldiv_t lldiv(long long int numer, long long int denom){
    lldiv_t result;

    result.quot = numer / denom;
    result.rem = numer % denom;

    if (numer >= 0 && result.rem < 0){
        ++result.quot;
        result.rem -= denom;
    }

    return result;
}
