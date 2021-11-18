/**
 * @file   libc/include/sys/thumb/none/syscall.h
 * @author Peter Züger
 * @date   17.11.2021
 * @brief  syscall stubs for thumb on NOSYS
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2021 Peter Züger.
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
#ifndef __SYS_THUMB_NONE_SYSCALL_H__
#define __SYS_THUMB_NONE_SYSCALL_H__

#include <types/size_t.h>

int _close(int fd);
int _fsync(int fd);
int _getpid(void);
int _kill(int pid, int sig);
size_t _read(int fd, void *buf, size_t size);
size_t _write(int fd, const void *buf, size_t size);
void _exit(int status);

#endif /* __SYS_THUMB_NONE_SYSCALL_H__ */
