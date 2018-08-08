/**
 * @file   intmax_t.h
 * @author Peter Zueger
 * @date   17.02.2018
 * @brief  signed maximum sized bit integer
 */
#ifndef __TYPE_INTMAX_T_H__
#define __TYPE_INTMAX_T_H__

#if defined(__INTMAX_TYPE__) || defined(DOXYGEN)
# if !defined(__INTMAX_T_DEFINED__)
#  define __INTMAX_T_DEFINED__
#  define INTMAX_MIN (-__INTMAX_MAX__-1)
#  define INTMAX_MAX (__INTMAX_MAX__)
typedef __INTMAX_TYPE__ intmax_t;
# endif /* !defined(__INTMAX_T_DEFINED__) */
#endif /* defined(__INTMAX_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INTMAX_T_H__ */
