/**
 * @file   src/ctype/isxdigit.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  7.4.1.12 The isxdigit function
 */
#include <ctype.h>

/**
 * @brief hexadecimal-digit character classification
 *
 * The isxdigit function tests for any hexadecimal-digit
 * character (as defined in 6.4.4.1).
 */
int isxdigit(int c){
    return (isdigit(c) || ((c>='A')&&(c<='F')) || ((c>='a')&&(c<='f')));
}
