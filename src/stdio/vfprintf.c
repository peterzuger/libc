/**
 * @file   libc/src/stdio/vfprintf.c
 * @author Peter Züger
 * @date   18.03.2020
 * @brief  7.21.6.8 The vfprintf function
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2020 Peter Züger.
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
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h> // for intmax_t, uintmax_t
#include <stddef.h> // for size_t, ptrdiff_t
#include <ctype.h>  // for isdigit()
#include <wchar.h>  // for wide character output

#define LEFT_JUSTIFIED ((unsigned int)(1 << 0))
#define SIGN_ALWAYS    ((unsigned int)(1 << 1))
#define SIGN_SPACE     ((unsigned int)(1 << 2))
#define ALTERNATE      ((unsigned int)(1 << 3))
#define ZERO_PADDING   ((unsigned int)(1 << 4))

typedef enum{
    CHAR,
    SHORT,
    LONG,
    LONGLONG,
    INTMAX,
    SIZE_T,
    PTRDIFF_T,
    DOUBLE
}length_t;

static inline int HEX_digit(uint8_t c){
    return "0123456789ABCDEF"[c & 0xF];
}

int vfprintf(FILE* __restrict__ stream, const char* __restrict__ format, va_list arg){
    int num_chars = 0;

    while(*format){
        // write everything up to the next % sign
        for(; *format && ( *format != '%' ); format++, num_chars++)
            if(fputc(*format, stream) == EOF)
                return EOF;

        // if string has ended just exit
        if(!*format)
            break;

        // skip the %
        format++;

        // handle %%
        if(*format == '%'){
            format++, num_chars++;
            if(fputc('%', stream) == EOF)
                return EOF;
            continue;
        }

        unsigned int flags = 0;
        // flags (0 or more in any order)
        for(;;){
            switch(*format++){
            case '-': // left justified
                flags &= ~ZERO_PADDING;
                flags |= LEFT_JUSTIFIED;
                continue;

            case '+': // show sign = always
                flags &= ~SIGN_SPACE;
                flags |= SIGN_ALWAYS;
                continue;

            case ' ': // show sign = space
                if(!(flags & SIGN_ALWAYS))
                    flags |= SIGN_SPACE;
                continue;

            case '#': // alternate form
                flags |= ALTERNATE;
                continue;

            case '0': // pad left with 0 instead of ' '
                if(!(flags & LEFT_JUSTIFIED))
                    flags |= ZERO_PADDING;
                continue;

            default: // no more flags
                format--;
                break;
            }
            break;
        }

        int width = 0;
        // field width (optional)( int[nonnegative] , * )
        if(isdigit(*format) && *format != '0'){
            do{
                width *= 10;
                width += *format - '0';
                format++;
            }while(isdigit(*format));
        }else if(*format == '*'){
            format++;
            width = va_arg(arg, int);
            if(width < 0)
                width = 0;
        }

        int precision = 0;
        // precision   (optional)( .<int> , .* )
        if(*format == '.'){
            format++;
            if(isdigit(*format)){
                do{
                    precision *= 10;
                    precision += *format - '0';
                    format++;
                }while(isdigit(*format));
            }else if(*format == '*'){
                format++;
                precision = va_arg(arg, int);
                if(precision < 0)
                    precision = 0;
            }else{
                format++;
            }
        }

        length_t length = 0;
        // length modifier
        switch(*format++){
        case 'h':               // short int / unsigned short int / short int*
            length = SHORT;
            if(*format == 'h'){ // signed char / unsigned char / signed char*
                format++;
                length = CHAR;
            }
            break;
        case 'l':               // long int / unsigned long int / long int* / wint_t / wchar_t*
            length = LONG;
            if(*format == 'l'){ // long long int / unsigned long long int / long long int*
                format++;
                length = LONGLONG;
            }
            break;
        case 'j':               // intmax_t / uintmax_t / intmax_t*
            length = INTMAX;
            break;
        case 'z':               // size_t / (signed size_t) / (signed size_t)*
            length = SIZE_T;
            break;
        case 't':               // ptrdiff_t / (signed ptrdiff_t) / (signed ptrdiff_t)*
            length = PTRDIFF_T;
            break;
        case 'L':               // long double
            length = DOUBLE;
            break;
        default:
            format--;
            break;
        }

        // conversion specifier
        switch(*format){
        case 'd':  // int as decimal               -- [-]dddd
        case 'i':  // ""
            break;

        case 'o':  // unsigned octal               -- 0dddd
        case 'u':  // unsigned int                 -- dddd
        case 'x':  // unsigned hexadecimal         -- 0xdddd
        case 'X':  // unsigned HEXADECIMAL         -- 0Xdddd
            break;

        case 'f':  // double (inf nan)             -- [-]ddd.dddd
        case 'F':  // double (INF NAN)             -- [-]ddd.dddd
            break;

        case 'e':  // double exponent (inf nan)    -- [-]d.dddde[+/-]dd
        case 'E':  // double exponent (INF NAN)    -- [-]d.dddde[+/-]dd
            break;

        case 'g':  // f/e depending on the size    -- see above
        case 'G':  // F/E depending on the size    -- see above
            break;

        case 'a':  // float hexadecimal            -- [-]0xh.hhhhp[+/-]d
        case 'A':  // float hexadecimal            -- [-]0Xh.hhhhp[+/-]d
            break;

        case 'c':  // character                    --
            if(length != LONG){// no l specifier
                int x = va_arg(arg, int);
                if(fputc((unsigned char)x, stream) == EOF)
                    return EOF;
                num_chars++;
            }else{
                wint_t x = va_arg(arg, wint_t);
                (void)x;// TODO
            }
            break;

        case 's':  // string                       --
            if(length != LONG){// no l specifier
                char* str = va_arg(arg, char*);
                if(precision > 0){
                    while(*str && precision){
                        precision--;
                        if(fputc(*str++, stream) == EOF)
                            return EOF;
                        num_chars++;
                    }
                }else{
                    while(*str){
                        if(fputc(*str++, stream) == EOF)
                            return EOF;
                        num_chars++;
                    }
                }
            }else{
                wchar_t* wstr = va_arg(arg, wchar_t*);
                mbstate_t mb = {0};
                char str[MB_CUR_MAX];
                size_t n, m;
                while(*wstr){
                    m = wcrtomb(str, *wstr++, &mb);
                    if(m == ((size_t)-1))
                        return EOF;
                    n = 0;
                    while(n < m){
                        if(fputc(str[n++], stream) == EOF)
                            return EOF;
                        num_chars++;
                    }
                }
            }
            break;

        case 'p':{ // pointer                      -- 0x01ABCDEF
            void* ptr = va_arg(arg, void*);
            num_chars += (sizeof(void*) * 2) + 2;

            if(fputc('0', stream) == EOF)return EOF;
            if(fputc('x', stream) == EOF)return EOF;

            for(int i = (sizeof(void*) * 8) - 4; i >= 0; i -= 4)
                if(fputc(HEX_digit((uint8_t)(((size_t)ptr) >> i)), stream) == EOF)
                    return EOF;
        }
            break;

        case 'n':  // number of characters written so far
            *va_arg(arg, int*) = num_chars;
            break;

        default:
            break;
        }
        format++;
    }

    return num_chars;
}
