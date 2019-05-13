/**
 * @file   src/stdio/stdfiles.c
 * @author Peter Züger
 * @date   01.12.2018
 * @brief  stdio files
 */
#include <stdio.h>

FILE __stdin = {
    .fd = 0,
};

FILE __stdout = {
    .fd = 1,
};

FILE __stderr = {
    .fd = 2,
};
