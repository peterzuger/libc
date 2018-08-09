/**
 * @file   src/ctype/isalnum.c
 * @author Peter Zueger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief alphanumerical character classification
 *
 * The isalnum function tests for any character for
 * which isalpha or isdigit is true.
 */
int isalnum(int c){
    return (isdigit(c) || isalpha(c));
}
