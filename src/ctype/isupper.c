/**
 * @file   src/ctype/isupper.c
 * @author Peter Zueger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief uppercase character classification
 *
 * The isupper function tests for any character that is an uppercase letter or
 * is one of a locale-specific set of characters for which none of iscntrl,
 * isdigit, ispunct, or isspace is true. In the "C" locale, isupper returns
 * true only for the uppercase letters (as defined in 5.2.1).
 */
int isupper(int c){
    return ((c>='A')&&(c<='Z'));
}
