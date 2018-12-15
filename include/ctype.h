/**
 * @file   ctype.h
 * @author Peter Zueger
 * @date   07.02.2018
 * @brief  Character handling
 */
#ifndef __CTYPE_H__
#define __CTYPE_H__

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// Character classification functions
int isalnum(int c);
int isalpha(int c);
int isblank(int c);
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);


// Character case mapping functions
int tolower(int c);
int toupper(int c);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __CTYPE_H___ */
