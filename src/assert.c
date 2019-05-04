/**
 * @file   assert.h
 * @author Peter Züger
 * @date   08.02.2018
 * @brief  verify program assertion
 */
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

void __assert(const char* expr,const char* file,
              const char* line,const char* func){
    fputs("assertion failed: ",stderr);
    fputs(expr,stderr);
    fputs("\n\t in file: ",stderr);
    fputs(file,stderr);
    fputs("\n\t on line: ",stderr);
    fputs(line,stderr);
    fputs("\n\t in function: ",stderr);
    fputs(func,stderr);
    abort();
}
