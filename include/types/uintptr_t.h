/**
 * @file   types/uintptr_t.h
 * @author Peter Züger
 * @date   17.02.2018
 * @brief  unsigned integer pointer
 */
#ifndef __TYPE_UINTPTR_T_H__
#define __TYPE_UINTPTR_T_H__

#if defined(__UINTPTR_TYPE__) || defined(DOXYGEN)
# if !defined(__UINTPTR_T_DEFINED__)
#  define __UINTPTR_T_DEFINED__
#  define UINTPTR_MIN (0)
#  define UINTPTR_MAX (__UINTPTR_MAX__)
typedef __UINTPTR_TYPE__ uintptr_t;
# endif /* !defined(__UINTPTR_T_DEFINED__) */
#endif /* defined(__UINTPTR_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_UINTPTR_T_H__ */
