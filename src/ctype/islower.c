/**
 * @file   src/ctype/islower.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief lowercase character classification
 *
 * The islower function tests for any character that is a lowercase letter or
 * is one of a locale-specific set of characters for which none of iscntrl,
 * isdigit, ispunct, or isspace is true. In the "C" locale, islower returns
 * true only for the lowercase letters (as defined in 5.2.1).
 */
int islower(int c){
    return ((c>='a')&&(c<='z'));
}
