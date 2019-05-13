/**
 * @file   src/stdio/stdfiles.c
 * @author Peter Züger
 * @date   01.12.2018
 * @brief  stdio files
 */
#include <stdio.h>

FILE _stdin = {
    .fd = 0,
};

FILE _stdout = {
    .fd = 1,
};

FILE _stderr = {
    .fd = 2,
};
