/**
 * @file   types/char32_t.h
 * @author Peter Zueger
 * @date   24.07.2018
 * @brief  32 bit char
 */
#ifndef __TYPE_CHAR32_T_H__
#define __TYPE_CHAR32_T_H__

#if !defined(__cplusplus)
# if defined(__CHAR32_TYPE__) || defined(DOXYGEN)
#  if !defined(__CHAR32_T_DEFINED__)
#   define __CHAR32_T_DEFINED__
#   define CHAR32_MIN (-__CHAR32_MAX__-1)
#   define CHAR32_MAX (__CHAR32_MAX__)
typedef __CHAR32_TYPE__ char32_t;
#  endif /* !defined(__CHAR32_T_DEFINED__) */
# endif /* defined(__CHAR32_TYPE__) || defined(DOXYGEN) */
#endif /* !defined(__cplusplus) */

#endif /* __TYPE_CHAR32_T_H__ */
