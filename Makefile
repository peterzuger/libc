MCPU=cortex-m4




NAME = libc

INC  = include
SRC  = src/assert.c src/ctype.c src/errno.c
SRC += src/stdlib/alloc.c src/stdlib/rand.c

OBJECTS = $(patsubst %.c, %.o, $(SRC))

CC=arm-none-eabi-
GCC     = $(CC)gcc
G++     = $(CC)g++
OBJCOPY = $(CC)objcopy
OBJDUMP = $(CC)objdump
LD      = $(CC)ld
AR      = $(CC)ar
AS      = $(CC)as
RANLIB  = $(CC)ranlib

OPTFLAGS= -O2
IFLAGS  =-I$(INC)
COMFLAGS= -static -mthumb -mcpu=$(MCPU) -nostartfiles -nostdlib

CFLAGS  = $(OPTFLAGS) $(IFLAGS) $(COMFLAGS) -c
CPPFLAGS= $(OPTFLAGS) $(IFLAGS) $(COMFLAGS) -c -std=c++17 -fno-rtti
LDFLAGS =
ARFLAGS =
ASFLAGS =

all: $(NAME).a

%.o: %.c
	$(GCC) $(CFLAGS) $< -o $@

%.o: %.cpp
	$(G++) $(CPPFLAGS) $< -o $@

$(NAME).a: $(OBJECTS)
	$(AR) rcs $(NAME).a $(OBJECTS)

.PHONY: clean
clean:
	rm -fv $(NAME).a
	rm -fv $(OBJECTS)
