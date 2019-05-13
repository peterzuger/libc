/**
 * @file   include/macros/math_errhandling.h
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  math error handling
 */
#ifndef __MACRO_MATH_ERRHANDLING_H__
#define __MACRO_MATH_ERRHANDLING_H__

#include <macros/MATH_ERRNO.h>
#include <macros/MATH_ERREXCEPT.h>

#if defined(__FAST_MATH__)
# define math_errhandling  (MATH_ERREXCEPT)
#else
# define math_errhandling  (MATH_ERRNO | MATH_ERREXCEPT)
#endif

#endif /* __MACRO_MATH_ERRHANDLING_H__ */
