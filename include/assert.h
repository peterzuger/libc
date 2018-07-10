/**
 * @file   assert.h
 * @author Peter Zueger
 * @date   07.02.2018
 * @brief  verify program assertion
 */
#ifndef __ASSERT_H__
#define __ASSERT_H__

#if defined(NDEBUG)
# define assert(ignore) ((void)0)
#else
# define assert(a) (a?:__assert(#a,__FILE__,__LINE__,__PRETTY_FUNCTION__))
#endif /* defined(NDEBUG) */

#define static_assert _Static_assert


#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */

void __assert(const char* expr,const char* file,
              const char* line,const char* func);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __ASSERT_H___ */
