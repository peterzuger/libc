/**
 * @file   wctrans_t.h
 * @author Peter Zueger
 * @date   24.07.2018
 * @brief  wide character transformation
 */
#ifndef __WCTRANS_T_H__
#define __WCTRANS_T_H__

#if defined(__WCHAR_TYPE__) || defined(DOXYGEN)
# if !defined(__WCTRANS_T_DEFINED__)
#  define __WCTRANS_T_DEFINED__
#  define WCTRANS_MIN (-__WCHAR_MAX__-1)
#  define WCTRANS_MAX (__WCAHR_MAX__)
typedef __WCHAR_TYPE__ wctrans_t;
# endif /* !defined(__WCTRANS_T_DEFINED__) */
#endif /* defined(__WCHAR_TYPE__) || defined(DOXYGEN) */

#endif /* __WCTRANS_T_H__ */
