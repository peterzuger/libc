/**
 * @file   src/ctype/toupper.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief Character case mapping lower to upper
 *
 * The toupper function converts a lowercase letter
 * to a corresponding uppercase letter.
 *
 * @return If the argument is a character for which islower is true and there
 *         are one or more corresponding characters, as specified by the current
 *         locale, for which isupper is true, the toupper function returns one
 *         of the corresponding characters (always the same one for any giv en
 *         locale); otherwise, the argument is returned unchanged.
 */
int toupper(int c){
    return islower(c)?(c-32):c;
}
