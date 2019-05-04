/**
 * @file   src/ctype/isblank.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief blank character classification
 *
 * The isblank function tests for any character that is a standard blank
 * character or is one of a locale-specific set of characters for which
 * isspace is true and that is used to separate words within a line of
 * text. The standard blank characters are the following: space (' '), and
 * horizontal tab ('\t'). In the "C" locale, isblank returns true only for
 * the standard blank characters.
 */
int isblank(int c){
    return ((c=='\t')||(c==' '));
}
