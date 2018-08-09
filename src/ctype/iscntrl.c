/**
 * @file   src/ctype/iscntrl.c
 * @author Peter Zueger
 * @date   09.08.2018
 * @brief  character type
 */
#include <ctype.h>

/**
 * @brief control character classification
 *
 * The iscntrl function tests for any control character.
 */
int iscntrl(int c){
    return ((c<=0x1F) || (c==0x7F));
}
