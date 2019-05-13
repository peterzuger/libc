/**
 * @file   include/locale.h
 * @author Peter Züger
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


// 7.11.1 Locale control
char* setlocale(int category, const char* locale);


// 7.11.2 Numeric formatting convention inquiry
struct lconv* localeconv(void);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __LOCALE_H___ */
