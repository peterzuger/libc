/**
 * @file   double_t.h
 * @author Peter Zueger
 * @date   22.07.2018
 * @brief  double type
 */
#ifndef __DOUBLE_T_H__
#define __DOUBLE_T_H__

#if !defined(__DOUBLE_T_DEFINED__)
# define __DOUBLE_T_DEFINED__
# if __FLT_EVAL_METHOD__ == 0
typedef double double_t;
# elif __FLT_EVAL_METHOD__ == 1
typedef double double_t;
# elif __FLT_EVAL_METHOD__ == 2
typedef long double double_t;
# else
#  error FLT_EVAL_METHOD not 0,1 or 2
# endif /* __FLT_EVAL_METHOD__ */
#endif /* !defined(__DOUBLE_T_DEFINED__) */

#endif /* __DOUBLE_T_H__ */
