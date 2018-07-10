/**
 * @file   assert.h
 * @author Peter Zueger
 * @date   08.02.2018
 * @brief  verify program assertion
 */
#include <assert.h>
#include <stdlib.h>

void __assert(const char* expr,const char* file,
              const char* line,const char* func){

    abort();
}
