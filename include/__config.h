/**
 * @file   config.h
 * @author Peter Zueger
 * @date   08.02.2018
 * @brief  library configuration
 */
#ifndef __CONFIG_H__
#define __CONFIG_H__

/*
 * stdlib configuration
 */
#define MALLOC_HEAP_BOT       (0x0200)
#define MALLOC_HEAP_TOP       (0x0400)
#define MALLOC_MIN_BLOCK_SIZE (0x20)
#define MALLOC_USE_BEST_FIT
//#define MALLOC_USE_FIRST_FIT

#endif /* __CONFIG_H__ */
