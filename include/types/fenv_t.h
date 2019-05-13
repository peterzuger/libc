/**
 * @file   include/types/fenv_t.h
 * @author Peter Züger
 * @date   16.12.2018
 * @brief  floating-point environment
 */
#ifndef __TYPE_FENV_T_H__
#define __TYPE_FENV_T_H__

#if defined(__UINT32_TYPE__) || defined(DOXYGEN)
# if !defined(__FENV_T_DEFINED__)
#  define __FENV_T_DEFINED__
typedef struct{

}fenv_t;
# endif /* !defined(__FENV_T_DEFINED__) */
#endif /* defined(__UINT32_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_FENV_T_H__ */
