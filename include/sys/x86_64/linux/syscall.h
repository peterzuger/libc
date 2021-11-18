/**
 * @file   libc/include/sys/x86_64/linux/syscall.h
 * @author Peter Züger
 * @date   17.11.2021
 * @brief  Linux syscalls
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
#ifndef __SYS_X86_64_LINUX_SYSCALL_H__
#define __SYS_X86_64_LINUX_SYSCALL_H__

#include <macros/syscall.h>

#include <types/size_t.h>

#include <types/ssize_t.h>
#include <types/mode_t.h>
#include <types/pid_t.h>

ssize_t _read(int fd, void *buf, size_t size);
ssize_t _write(int fd, const void *buf, size_t size);
int _open(const char* fd, int flags, mode_t mode);
int _close(int fd);
void* _brk(void* addr);
pid_t _getpid(void);
void _exit(int status);
int _kill(pid_t pid, int sig);
int _fsync(int fd);

#endif /* __SYS_X86_64_LINUX_SYSCALL_H__ */
