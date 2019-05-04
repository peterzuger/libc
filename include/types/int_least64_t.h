/**
 * @file   types/int_least64_t.h
 * @author Peter Züger
 * @date   08.04.2018
 * @brief  signed least 64 bit integer
 */
#ifndef __TYPE_INT_LEAST64_T_H__
#define __TYPE_INT_LEAST64_T_H__

#if defined(__INT_LEAST64_TYPE__) || defined(DOXYGEN)
# if !defined(__INT_LEAST64_T_DEFINED__)
#  define __INT_LEAST64_T_DEFINED__
#  define INT_LEAST64_MIN (-__INT_LEAST64_MAX__-1)
#  define INT_LEAST64_MAX (__INT_LEAST64_MAX__)
typedef __INT_LEAST64_TYPE__ int_least64_t;
# endif /* !defined(__INT_LEAST64_T_DEFINED__) */
#endif /* defined(__INT_LEAST64_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT_LEAST64_T_H__ */
