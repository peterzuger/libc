/**
 * @file   src/ctype/isspace.c
 * @author Peter Zueger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief white-space character classification
 *
 * The isspace function tests for any character that is a standard white-space
 * character or is one of a locale-specific set of characters for which isalnum
 * is false. The standard white-space characters are the following:
 * space (' '), form feed ('\f'), new-line ('\n'), carriage return ('\r'),
 * horizontal tab ('\t'), and vertical tab ('\v'). In the "C" locale,
 * isspace returns true only for the standard white-space characters.
 */
int isspace(int c){
    return (((c>='\t')&&(c<='\r')) || (c==' '));
}
