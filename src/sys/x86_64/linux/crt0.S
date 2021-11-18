# @file   libc/src/sys/x86_64/linux/crt0.S
# @author Peter Züger
# @date   17.11.2021
# @brief  C runtime _start function for linux on x86_64
#
# This file is part of libc (https://gitlab.com/peterzuger/libc).
# Copyright (c) 2021 Peter Züger.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, version 3.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <http://www.gnu.org/licenses/>.
#
    .globl _start
_start:                       # _start is the entry point known to the linker
    xor %ebp, %ebp            # effectively RBP := 0, mark the end of stack frames
    mov (%rsp), %edi          # get argc from the stack (implicitly zero-extended to 64-bit)
    lea 8(%rsp), %rsi         # take the address of argv from the stack
    lea 16(%rsp,%rdi,8), %rdx # take the address of envp from the stack
    xor %eax, %eax            # per ABI and compatibility with icc
    call __libc_main          # %edi, %rsi, %rdx are the three args (of which first two are C standard) to main
    hlt                       # crash if __libc_main returns
