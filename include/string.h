/**
 * @file   string.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  String handling
 */
#ifndef __STRING_H__
#define __STRING_H__

#include <types/size_t.h>
#include <macros/NULL.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.24.2 Copying functions
void* memcpy(void* __restrict__ s1, const void* __restrict__ s2, size_t n);
void* memmove(void* s1, const void* s2, size_t n);

char* strcpy(char* __restrict__ s1, const char* __restrict__ s2);
char* strncpy(char* __restrict__ s1, const char* __restrict__ s2, size_t n);


// 7.24.3 Concatenation functions
char* strcat(char* __restrict__ s1, const char* __restrict__ s2);
char* strncat(char* __restrict__ s1, const char* __restrict__ s2, size_t n);


// 7.24.4 Comparison functions
int memcmp(const void* s1, const void* s2, size_t n);
int strcmp(const char* s1, const char* s2);

int strcoll(const char* s1, const char* s2);
int strncmp(const char* s1, const char* s2, size_t n);
size_t strxfrm(char* __restrict__ s1, const char* __restrict__ s2, size_t n);


// 7.24.5 Search functions
void* memchr(const void* s, int c, size_t n);
char* strchr(const char* s, int c);

size_t strcspn(const char* s1, const char* s2);
char* strpbrk(const char* s1, const char* s2);
char* strrchr(const char* s, int c);
size_t strspn(const char* s1, const char* s2);
char* strstr(const char* s1, const char* s2);
char* strtok(char* __restrict__ s1, const char* __restrict__ s2);


// 7.24.6 Miscellaneous functions
void* memset(void* s, int c, size_t n);
char* strerror(int errnum);

size_t strlen(const char* s);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __STRING_H___ */
