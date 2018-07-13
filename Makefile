NAME      ?=libc

MCPU      ?=cortex-m4
HEAP_BOT  ?=0x2000000
HEAP_SIZE ?=0x400


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


DFLAGS  =-DHEAP_BOT=$(HEAP_BOT) -DHEAP_SIZE=$(HEAP_SIZE)
OPTFLAGS= -O2
IFLAGS  =-I$(INC)
COMFLAGS= -static -mthumb -mcpu=$(MCPU) -nostartfiles -nostdlib

CFLAGS  = $(OPTFLAGS) $(IFLAGS) $(COMFLAGS) $(DFLAGS) -c
CPPFLAGS= $(OPTFLAGS) $(IFLAGS) $(COMFLAGS) $(DFLAGS) -c -std=c++17 -fno-rtti
LDFLAGS =
ARFLAGS =
ASFLAGS =

all: $(NAME).a

%.o: %.c
	$(GCC) $(CFLAGS) $< -o $@

%.o: %.cpp
	$(G++) $(CPPFLAGS) $< -o $@

%.a: $(OBJECTS)
	$(AR)  $(ARFLAGS) rcs $@ $<

.PHONY: clean clean_all
clean:
	rm -fv $(OBJECTS)
clean_all: clean
	rm -fv *.a
