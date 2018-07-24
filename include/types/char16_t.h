/**
 * @file   char16_t.h
 * @author Peter Zueger
 * @date   24.07.2018
 * @brief  16 bit char
 */
#ifndef __CHAR16_T_H__
#define __CHAR16_T_H__

#if defined(__CHAR16_TYPE__) || defined(DOXYGEN)
# if !defined(__CHAR16_T_DEFINED__)
#  define __CHAR16_T_DEFINED__
#  define CHAR16_MIN (-__CHAR16_MAX__-1)
#  define CHAR16_MAX (__CHAR16_MAX__)
typedef __CHAR16_TYPE__ char16_t;
# endif /* !defined(__CHAR16_T_DEFINED__) */
#endif /* defined(__CHAR16_TYPE__) || defined(DOXYGEN) */

#endif /* __CHAR16_T_H__ */
