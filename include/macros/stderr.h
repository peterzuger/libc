/**
 * @file   include/macros/stderr.h
 * @author Peter Züger
 * @date   10.05.2019
 * @brief  stderr file stream
 */
#ifndef STDERR_H
#define STDERR_H

extern FILE __stderr;
#define stderr (&__stderr)

#endif /* STDERR_H */
