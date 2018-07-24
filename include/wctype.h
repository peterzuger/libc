/**
 * @file   wctype.h
 * @author Peter Zueger
 * @date   07.02.2018
 * @brief  wide-character classification and mapping utilities
 */
#ifndef __WCTYPE_H__
#define __WCTYPE_H__

#include <types/wint_t.h>
#include <types/wctrans_t.h>
#include <types/wctype_t.h>

#include <macros/WEOF.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// Wide character classification functions
int iswalnum(wint_t wc);
int iswalpha(wint_t wc);
int iswblank(wint_t wc);
int iswcntrl(wint_t wc);
int iswdigit(wint_t wc);
int iswgraph(wint_t wc);
int iswlower(wint_t wc);
int iswprint(wint_t wc);
int iswpunct(wint_t wc);
int iswspace(wint_t wc);
int iswupper(wint_t wc);
int iswxdigit(wint_t wc);


// Extensible wide character classification functions
int iswctype(wint_t wc, wctype_t desc);
wctype_t wctype(const char *property);


// Wide character case mapping utilities
wint_t towlower(wint_t wc);
wint_t towupper(wint_t wc);


// Extensible wide character case mapping functions
wint_t towctrans(wint_t wc, wctrans_t desc);
wctrans_t wctrans(const char *property);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __WCTYPE_H___ */
