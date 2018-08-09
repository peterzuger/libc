/**
 * @file   src/ctype/isgraph.c
 * @author Peter Zueger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief visible printing character classification
 *
 * The isgraph function tests for any printing character except space (' ').
 */
int isgraph(int c){
    return ((c>='!')&&(c<='~'));
}
