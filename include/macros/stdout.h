/**
 * @file   include/macros/stdout.h
 * @author Peter Züger
 * @date   10.05.2019
 * @brief  stdout file stream
 */
#ifndef STDOUT_H
#define STDOUT_H

extern FILE __stdout;
#define stdout (&__stdout)

#endif /* STDOUT_H */
