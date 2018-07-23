/**
 * @file   stdalign.h
 * @author Peter Zueger
 * @date   28.01.2018
 * @note   part of the freestanding headers
 * @brief  alignment
 */
#ifndef __STDALIGN_H__
#define __STDALIGN_H__

#if !defined(__cplusplus)

#define alignas _Alignas
#define alignof _Alignof

#define __alignas_is_defined 1
#define __alignof_is_defined 1

#endif /* !defined(__cplusplus) */

#endif /* __STDALIGN_H__ */
