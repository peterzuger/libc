/**
 * @file   src/ctype/isdigit.c
 * @author Peter Zueger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief decimal-digit character classification
 *
 * The isdigit function tests for any decimal-digit character
 * (as defined in 5.2.1).
 */
int isdigit(int c){
    return ((c>='0')&&(c<='9'));
}
