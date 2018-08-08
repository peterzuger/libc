/**
 * @file   uint_least64_t.h
 * @author Peter Zueger
 * @date   08.04.2018
 * @brief  unsigned least 16 bit integer
 */
#ifndef __TYPE_UINT_LEAST16_T_H__
#define __TYPE_UINT_LEAST16_T_H__

#if defined(__UINT_LEAST16_TYPE__) || defined(DOXYGEN)
# if !defined(__UINT_LEAST16_T_DEFINED__)
#  define __UINT_LEAST16_T_DEFINED__
#  define UINT_LEAST16_MIN (0)
#  define UINT_LEAST16_MAX (__UINT_LEAST16_MAX__)
typedef __UINT_LEAST16_TYPE__ uint_least16_t;
# endif /* !defined(__UINT_LEAST16_T_DEFINED__) */
#endif /* defined(__UINT_LEAST16_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_UINT_LEAST16_T_H__ */
