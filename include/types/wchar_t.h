/**
 * @file   wchar_t.h
 * @author Peter Zueger
 * @date   05.02.2018
 * @brief  wide character type
 */
#ifndef __WCHAR_T_H__
#define __WCHAR_T_H__

#if !defined(__cplusplus)
# if defined(__WCHAR_TYPE__) || defined(DOXYGEN)
#  if !defined(__WCHAR_T_DEFINED__)
#   define __WCHAR_T_DEFINED__
typedef __WCHAR_TYPE__ wchar_t;
#  endif /* !defined(__WCHAR_T_TYPE_DEFINED__) */
# endif /* defined(__WCHAR_TYPE__) || defined(DOXYGEN) */
#endif /* !defined(__cplusplus) */

#endif /* __WCHAR_T_H__ */
