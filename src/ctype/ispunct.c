/**
 * @file   src/ctype/ispunct.c
 * @author Peter Zueger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief punctuation character classification
 *
 * The ispunct function tests for any printing character that is one of a
 * locale-specific set of punctuation characters for which neither
 * isspace nor isalnum is true. In the "C" locale, ispunct returns true for
 * every printing character for which neither isspace nor isalnum is true.
 */
int ispunct(int c){
    return (((c>='!')&&(c<='/')) || ((c>=':')&&(c<='@')) ||
            ((c>='[')&&(c<='`')) || ((c>='{')&&(c<='~')));
}
