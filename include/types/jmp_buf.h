/**
 * @file   libc/include/types/jmp_buf.h
 * @author Peter Züger
 * @date   13.05.2019
 * @brief  longjump buffer
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
#ifndef __TYPE_JMP_BUF_H__
#define __TYPE_JMP_BUF_H__

#if !defined(__JMP_BUF_DEFINED__)
# define __JMP_BUF_DEFINED__
typedef struct{

}jmp_buf;
#endif /* !defined(__JMP_BUF_DEFINED__) */

#endif /* __TYPE_JMP_BUF_H__ */
