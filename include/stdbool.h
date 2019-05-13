/**
 * @file   include/stdbool.h
 * @author Peter Züger
 * @date   28.01.2018
 * @note   part of the freestanding headers
 * @brief  Boolean type and values
 */
#ifndef __STDBOOL_H__
#define __STDBOOL_H__

#if !defined(__cplusplus)

# define bool _Bool
# define true 1
# define false 0

#endif /* !defined(__cplusplus) */

#endif /* __STDBOOL_H__ */
