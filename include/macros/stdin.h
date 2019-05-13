/**
 * @file   include/macros/stdin.h
 * @author Peter Züger
 * @date   10.05.2019
 * @brief  stdin file stream
 */
#ifndef STDIN_H
#define STDIN_H

extern FILE __stdin;
#define stdin (&__stdin)

#endif /* STDIN_H */
