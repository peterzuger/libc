/**
 * @file   size_t.h
 * @author Peter Zueger
 * @date   05.02.2018
 * @brief  return type of sizeof
 */
#ifndef __TYPE_SIZE_T_H__
#define __TYPE_SIZE_T_H__

#if defined(__SIZE_TYPE__) || defined(DOXYGEN)
# if !defined(__SIZE_T_DEFINED__)
#  define __SIZE_T_DEFINED__
typedef __SIZE_TYPE__ size_t;
typedef __SIZE_TYPE__ rsize_t;
# endif /* !defined(__SIZE_T_DEFINED__) */
#endif /* defined(__SIZE_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_SIZE_T_H__ */
