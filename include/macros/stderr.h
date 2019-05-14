/**
 * @file   include/macros/stderr.h
 * @author Peter Züger
 * @date   10.05.2019
 * @brief  stderr file stream
 */
#ifndef __MACROS_STDERR_H__
#define __MACROS_STDERR_H__

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


extern FILE __stderr;


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#define stderr (&__stderr)

#endif /* __MACROS_STDERR_H__ */
