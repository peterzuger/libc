/**
 * @file   int_least16_t.h
 * @author Peter Zueger
 * @date   08.04.2018
 * @brief  signed least 16 bit integer
 */
#ifndef __TYPE_INT_LEAST16_T_H__
#define __TYPE_INT_LEAST16_T_H__

#if defined(__INT_LEAST16_TYPE__) || defined(DOXYGEN)
# if !defined(__INT_LEAST16_T_DEFINED__)
#  define __INT_LEAST16_T_DEFINED__
#  define INT_LEAST16_MIN (-__INT_LEAST16_MAX__-1)
#  define INT_LEAST16_MAX (__INT_LEAST16_MAX__)
typedef __INT_LEAST16_TYPE__ int_least16_t;
# endif /* !defined(__INT_LEAST16_T_DEFINED__) */
#endif /* defined(__INT_LEAST16_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT_LEAST16_T_H__ */
