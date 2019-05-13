/**
 * @file   src/ctype/isgraph.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  7.4.1.6 The isgraph function
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
