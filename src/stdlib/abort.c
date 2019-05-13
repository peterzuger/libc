/**
 * @file   src/stdlib/abort.c
 * @author Peter Züger
 * @date   16.07.2018
 * @brief  7.2.1.1 The assert macro implementation
 */
#include <stdlib.h>

/**
 * this executes a illegal instruction which triggers the NMI handler
 */
_Noreturn void abort(){
    asm volatile (".word 0xe7f0def0\n"); /** arm+thumb illegal instruction */
    asm volatile (".short 0xde00\n");    /** thumb illegal instruction */
    asm volatile (".word 0xe7f000f0\n"); /** arm illegal instruction */
    for(;;);
}
