/**
 * @file   include/macros/stdout.h
 * @author Peter Züger
 * @date   10.05.2019
 * @brief  stdout file stream
 */
#ifndef STDOUT_H
#define STDOUT_H

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


extern FILE __stdout;


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#define stdout (&__stdout)

#endif /* STDOUT_H */
