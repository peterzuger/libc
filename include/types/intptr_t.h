/**
 * @file   types/intptr_t.h
 * @author Peter Zueger
 * @date   17.02.2018
 * @brief  signed integer pointer
 */
#ifndef __TYPE_INTPTR_T_H__
#define __TYPE_INTPTR_T_H__

#if defined(__INTPTR_TYPE__) || defined(DOXYGEN)
# if !defined(__INTPTR_T_DEFINED__)
#  define __INTPTR_T_DEFINED__
#  define INTPTR_MIN (-__INTPTR_MAX__-1)
#  define INTPTR_MAX (__INTPTR_MAX__)
typedef __INTPTR_TYPE__ intptr_t;
# endif /* !defined(__INTPTR_T_DEFINED__) */
#endif /* defined(__INTPTR_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INTPTR_T_H__ */
