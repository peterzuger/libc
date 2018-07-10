/**
 * @file   stdio.h
 * @author Peter Zueger
 * @date   07.02.2018
 * @brief  standard buffered input/output
 */
#ifndef __STDIO_H__
#define __STDIO_H__

#include <types/FILE.h>

#define stdout (FILE*)1
#define stdin  (FILE*)2
#define stderr (FILE*)3

int fputs(const char* s,FILE* stream);

#endif /* __STDIO_H__ */
