/**
 * @file   include/macros/FE_DFL_ENV.h
 * @author Peter Züger
 * @date   02.05.2019
 * @brief  Floatingpoint environment default
 */
#ifndef __MACROS_FE_DFL_ENV_H__
#define __MACROS_FE_DFL_ENV_H__

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


extern fenv_t __fe_dfl_env;


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#define FE_DFL_ENV (__fe_dfl_env)

#endif /* __MACROS_FE_DFL_ENV_H__ */
