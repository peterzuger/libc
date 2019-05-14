/**
 * @file   include/macros/stdin.h
 * @author Peter Züger
 * @date   10.05.2019
 * @brief  stdin file stream
 */
#ifndef __MACROS_STDIN_H__
#define __MACROS_STDIN_H__

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


extern FILE __stdin;


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#define stdin (&__stdin)

#endif /* __MACROS_STDIN_H__ */
