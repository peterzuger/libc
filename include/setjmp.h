/**
 * @file   setjmp.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Nonlocal jumps
 */
#ifndef __SETJMP_H__
#define __SETJMP_H__

typedef struct{}jmp_buf;


// 7.13.1 Save calling environment
#define setjmp(jmp_buf) (0)


#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.13.2 Restore calling environment
__attribute__((noreturn)) void longjmp(jmp_buf env, int val);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __SETJMP_H___ */
