/**
 * @file   libc/include/stdio.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Input/output
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2019 Peter Züger.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __STDIO_H__
#define __STDIO_H__

#include <types/size_t.h>
#include <types/FILE.h>
#include <types/fpos_t.h>
#include <types/va_list.h>

#include <macros/NULL.h>
#include <macros/_IOFBF.h>
#include <macros/_IOLBF.h>
#include <macros/_IONBF.h>
#include <macros/BUFSIZ.h>
#include <macros/EOF.h>
#include <macros/FOPEN_MAX.h>
#include <macros/FILENAME_MAX.h>
#include <macros/L_tmpnam.h>
#include <macros/SEEK_CUR.h>
#include <macros/SEEK_END.h>
#include <macros/SEEK_SET.h>
#include <macros/TMP_MAX.h>
#include <macros/stdin.h>
#include <macros/stdout.h>
#include <macros/stderr.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.21.4 Operations on files
int remove(const char* filename);
int rename(const char* old, const char *_new);
FILE* tmpfile(void);
char* tmpnam(char* s);


// 7.21.5 File access functions
int fclose(FILE* stream);
int fflush(FILE* stream);
FILE* fopen(const char* __restrict__ filename, const char* __restrict__ mode);
FILE* freopen(const char* __restrict__ filename, const char* __restrict__ mode,
              FILE* __restrict__ stream);
void setbuf(FILE* __restrict__ stream, char* __restrict__ buf);
int setvbuf(FILE* __restrict__ stream, char* __restrict__ buf, int mode,
            size_t size);


// 7.21.6 Formatted input/output functions
int fprintf(FILE* __restrict__ stream, const char* __restrict__ format, ...);
int fscanf(FILE* __restrict__ stream, const char* __restrict__ format, ...);
int printf(const char* __restrict__ format, ...);
int scanf(const char* __restrict__ format, ...);
int snprintf(char* __restrict__ s, size_t n,
             const char* __restrict__ format, ...);
int sprintf(char* __restrict__ s, const char* __restrict__ format, ...);
int sscanf(const char* __restrict__ s, const char* __restrict__ format, ...);
int vfprintf(FILE* __restrict__ stream, const char* __restrict__ format,
             va_list arg);
int vfscanf(FILE* __restrict__ stream, const char* __restrict__ format,
            va_list arg);
int vprintf(const char* __restrict__ format, va_list arg);
int vscanf(const char* __restrict__ format, va_list arg);
int vsnprintf(char* __restrict__ s, size_t n,
              const char* __restrict__ format, va_list arg);
int vsprintf(char* __restrict__ s, const char* __restrict__ format,
             va_list arg);
int vsscanf(const char * __restrict__ s,
            const char* __restrict__ format, va_list arg);


// 7.21.7 Character input/output functions
int fgetc(FILE* stream);
char *fgets(char* __restrict__ s, int n, FILE* __restrict__ stream);
int fputc(int c, FILE *stream);
int fputs(const char* __restrict__ s, FILE* __restrict__ stream);
int getc(FILE* stream);
int getchar(void);
int putc(int c, FILE* stream);
int putchar(int c);
int puts(const char* s);
int ungetc(int c, FILE* stream);


// 7.21.8 Direct input/output functions
size_t fread(void* __restrict__ ptr, size_t size, size_t nmemb,
             FILE* __restrict__ stream);
size_t fwrite(const void* __restrict__ ptr, size_t size, size_t nmemb,
              FILE* __restrict__ stream);


// 7.21.9 File positioning functions
int fgetpos(FILE* __restrict__ stream, fpos_t* __restrict__ pos);
int fseek(FILE* stream, long int offset, int whence);
int fsetpos(FILE* stream, const fpos_t *pos);
long int ftell(FILE* stream);
void rewind(FILE* stream);


// 7.21.10 Error-handling functions
void clearerr(FILE* stream);
int feof(FILE* stream);
int ferror(FILE* stream);
void perror(const char* s);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __STDIO_H__ */
