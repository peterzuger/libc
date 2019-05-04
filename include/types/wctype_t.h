/**
 * @file   types/wctype_t.h
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  wide character type
 */
#ifndef __TYPE_WCTYPE_T_H__
#define __TYPE_WCTYPE_T_H__

#if defined(__WCHAR_TYPE__) || defined(DOXYGEN)
# if !defined(__WCTYPE_T_DEFINED__)
#  define __WCTYPE_T_DEFINED__
#  define WCTYPE_MIN (-__WCHAR_MAX__-1)
#  define WCTYPE_MAX (__WCHAR_MAX__)
typedef __WCHAR_TYPE__ wctype_t;
# endif /* !defined(__WCTYPE_T_DEFINED__) */
#endif /* defined(__WCHAR_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_WCTYPE_T_H__ */
