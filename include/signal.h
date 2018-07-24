/**
 * @file   signal.h
 * @author Peter Zueger
 * @date   07.02.2018
 * @brief  signals
 */
#ifndef __SIGNAL_H__
#define __SIGNAL_H__

#include <types/sig_atomic_t.h>

typedef void (*__sighandler_t)(int);
#define SIG_DFL	(( __sighandler_t)0)	/* default signal handling */
#define SIG_IGN	(( __sighandler_t)1)	/* ignore signal */
#define SIG_ERR	(( __sighandler_t)-1)	/* error return from signal */


#define SIGABRT  1
#define SIGFPE   2
#define SIGILL   3
#define SIGINT   4
#define SIGSEGV  5
#define SIGTERM  6

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// Specify signal handling
void (*signal(int sig, void (*func)(int)))(int);

// Send signal
int raise(int sig);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __SIGNAL_H___ */
