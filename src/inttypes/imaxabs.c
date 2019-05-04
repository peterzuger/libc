/**
 * @file   imaxabs.c
 * @author Peter Züger
 * @date   22.07.2018
 * @breif  absolute value of imax_t
 */
#include <inttypes.h>

intmax_t imaxabs(intmax_t j){
    return j < 0 ? -j : j;
}
