/**
 * @file   types/intmax_t.h
 * @author Peter Züger
 * @date   17.02.2018
 * @brief  unsigned maximum sized bit integer
 */
#ifndef __TYPE_UINTMAX_T_H__
#define __TYPE_UINTMAX_T_H__

#if defined(__UINTMAX_TYPE__) || defined(DOXYGEN)
# if !defined(__UINTMAX_T_DEFINED__)
#  define __UINTMAX_T_DEFINED__
#  define UINTMAX_MIN (0)
#  define UINTMAX_MAX (__UINTMAX_MAX__)
#  define UINTMAX_C(c) __UINTMAX_C(c)
typedef __UINTMAX_TYPE__ uintmax_t;
# endif /* !defined(__UINTMAX_T_DEFINED__) */
#endif /* defined(__UINTMAX_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_UINTMAX_T_H__ */
