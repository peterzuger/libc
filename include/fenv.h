/**
 * @file   include/fenv.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Floating-point environment
 */
#ifndef __FENV_H__
#define __FENV_H__

#include <types/fenv_t.h>
#include <types/fexcept_t.h>

#include <macros/FE_EXCEPT.h>
#include <macros/FE_DFL_ENV.h>
#include <macros/FE_ROUND.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.6.2 Floating-point exceptions
int feclearexcept(int excepts);
int fegetexceptflag(fexcept_t *flagp,
                    int excepts);
int feraiseexcept(int excepts);
int fesetexceptflag(const fexcept_t *flagp,
                    int excepts);
int fetestexcept(int excepts);


// 7.6.3 Rounding
int fegetround(void);
int fesetround(int round);


// 7.6.4 Environment
int fegetenv(fenv_t *envp);
int feholdexcept(fenv_t *envp);
int fesetenv(const fenv_t *envp);
int feupdateenv(const fenv_t *envp);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __FENV_H___ */
