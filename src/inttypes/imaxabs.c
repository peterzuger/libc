/**
 * @file   src/inttypes/imaxabs.c
 * @author Peter Züger
 * @date   22.07.2018
 * @breif  7.8.2.1 The imaxabs function
 */
#include <inttypes.h>

intmax_t imaxabs(intmax_t j){
    return j < 0 ? -j : j;
}
