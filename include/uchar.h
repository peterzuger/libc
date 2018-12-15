/**
 * @file   uchar.h
 * @author Peter Zueger
 * @date   07.02.2018
 * @brief  Unicode utilities
 */
#ifndef __UCHAR_H__
#define __UCHAR_H__

#include <types/size_t.h>
#include <types/mbstate_t.h>
#include <types/char16_t.h>
#include <types/char32_t.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// Restartable multibyte/wide character conversion functions
size_t mbrtoc16(char16_t* restrict pc16,
                const char* restrict s, size_t n,
                mbstate_t* restrict ps);
size_t c16rtomb(char* restrict s, char16_t c16,
                mbstate_t* restrict ps);
size_t mbrtoc32(char32_t* restrict pc32,
                const char* restrict s, size_t n,
                mbstate_t* restrict ps);
size_t c32rtomb(char* restrict s, char32_t c32,
                mbstate_t* restrict ps);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __UCHAR_H___ */
