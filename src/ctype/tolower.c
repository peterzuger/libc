/**
 * @file   src/ctype/tolower.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief Character case mapping upper to lower
 *
 * The tolower function converts an uppercase letter
 * to a corresponding lowercase letter.
 *
 * @return If the argument is a character for which isupper is true and there
 *         are one or more corresponding characters, as specified by the current
 *         locale, for which islower is true, the tolower function returns one
 *         of the corresponding characters (always the same one for any given
 *         locale); otherwise, the argument is returned unchanged.
 */
int tolower(int c){
    return isupper(c)?(c+32):c;
}
