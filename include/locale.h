/**
 * @file   locale.h
 * @author Peter Zueger
 * @date   07.02.2018
 * @brief  Localization
 */
#ifndef __LOCALE_H__
#define __LOCALE_H__

#include <types/lconv.h>

#include <macros/NULL.h>
#include <macros/LC.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


char* setlocale(int category, const char* locale);
struct lconv* localeconv(void);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __LOCALE_H___ */
