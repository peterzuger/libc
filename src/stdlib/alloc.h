/**
 * @file   libc/src/stdlib/alloc.h
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  dynamic memory allocation
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2019 Peter Züger.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __SRC_STDLIB_ALLOC_H__
#define __SRC_STDLIB_ALLOC_H__

#include <stddef.h>

/**
 * container_of - cast a member of a structure out to the containing structure
 * @param ptr:    the pointer to the member.
 * @param type:   the type of the container struct this is embedded in.
 * @param member: the name of the member within the struct.
 */
#define container_of(ptr, type, member) __extension__({         \
            const typeof(((type*)0)->member)* __mptr = (ptr);   \
            (type*)((char*)__mptr - offsetof(type, member));})

/**
 * get the respective memory from the block or vice versa
 */
#define BLOCK_FROM_MEM(m) (container_of(m, block_t, memory))
#define MEM_FROM_BLOCK(b) (&((b)->memory))

/**
 * magic values for block identification
 */
#define MAGIC_USED (0xACDCDEAF)
#define MAGIC_FREE (0xDEADBEEF)


typedef struct block_t{
    struct block_t* prev;   /**< pointer to the next block */
    struct block_t* next;   /**< pointer to the previous block */
    size_t          size;   /**< size of the block not including this struct */
    size_t          magic;  /**< magic value for identification */
    char*           memory; /**< first Byte the user gets dont modify !*/
}block_t;

#define BLOCK_SIZE (sizeof(block_t) - sizeof(char*))


typedef struct{
    block_t* first; /**< pointer to first memory block in free list */
    block_t* last;  /**< pointer to last memory block */
    size_t   used;  /**< total allocated memory in bytes*/
}malloc_t;

extern volatile malloc_t base;


block_t* find_free_block(size_t size);
block_t* create_block(size_t size);
void     split_block(block_t* block, size_t size);
void     merge_blocks(block_t* block);
void     use_block(block_t* block);
void     free_block(block_t* block);

#endif /* __SRC_STDLIB_ALLOC_H__ */
