/**
 * @file   types/float_t.h
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  float type
 */
#ifndef __TYPE_FLOAT_T_H__
#define __TYPE_FLOAT_T_H__

#if !defined(__FLOAT_T_DEFINED__)
# define __FLOAT_T_DEFINED__
# if __FLT_EVAL_METHOD__ == 0
typedef float float_t;
# elif __FLT_EVAL_METHOD__ == 1
typedef double float_t;
# elif __FLT_EVAL_METHOD__ == 2
typedef long double float_t;
# else
#  error FLT_EVAL_METHOD not 0,1 or 2
# endif /* __FLT_EVAL_METHOD__ */
#endif /* !defined(__FLOAT_T_DEFINED__) */

#endif /* __TYPE_FLOAT_T_H__ */
