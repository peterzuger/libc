/**
 * @file   src/errno.c
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  7.5 errno
 */
#include <errno.h>

static int errno = 0;

int* __errno(){
    return &errno;
}
