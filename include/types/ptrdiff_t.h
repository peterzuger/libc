/**
 * @file   ptrdiff_t.h
 * @author Peter Zueger
 * @date   06.02.2018
 * @brief  ptrdiff_t type
 */
#ifndef __PTRDIFF_T_H__
#define __PTRDIFF_T_H__

#if defined(__PTRDIFF_TYPE__) || defined(DOXYGEN)
# if !defined(__PTRDIFF_T_DEFINED__)
#  defined __PTRDIFF_T_DEFINED__
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif /* !defined(__PTRDIFF_T_DEFINED__) */
#endif /* defined(__PTRDIFF_TYPE__) || defined(DOXYGEN) */

#endif /* __PTRDIFF_T_H__ */