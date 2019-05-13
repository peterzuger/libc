/**
 * @file   include/types/ptrdiff_t.h
 * @author Peter Züger
 * @date   06.02.2018
 * @brief  ptrdiff_t type
 */
#ifndef __TYPE_PTRDIFF_T_H__
#define __TYPE_PTRDIFF_T_H__

#if defined(__PTRDIFF_TYPE__) || defined(DOXYGEN)
# if !defined(__PTRDIFF_T_DEFINED__)
#  define __PTRDIFF_T_DEFINED__
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif /* !defined(__PTRDIFF_T_DEFINED__) */
#endif /* defined(__PTRDIFF_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_PTRDIFF_T_H__ */
