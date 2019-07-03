NAME     = libc
VERBOSE ?=
DEBUG   ?=

ifeq ($(VERBOSE),1)
	Q =
else
	Q = @
endif

CSRC  = $(wildcard src/*.c)
CSRC += $(wildcard src/stdlib/*.c)
CSRC += $(wildcard src/stdio/*.c)
CSRC += $(wildcard src/string/*.c)
CSRC += $(wildcard src/complex/*.c)
CSRC += $(wildcard src/ctype/*.c)
CSRC += $(wildcard src/inttypes/*.c)

OBJECTS = $(CSRC:.c=.o)

CC   = arm-none-eabi-
GCC  = $(Q)$(CC)gcc
GXX  = $(Q)$(CC)g++
CPP  = $(Q)$(CC)gcc -E
AR   = $(Q)$(CC)ar
AS   = $(Q)$(CC)as
ECHO = @echo -e

ifeq ($(VERBOSE),1)
	RM = rm -v
else
	RM = @rm
endif

ifeq ($(DEBUG),1)
	DBGFLAGS = -g
else
	DBGFLAGS =
endif

DFLAGS   =
OPTFLAGS = -O2 -ffunction-sections -fdata-sections $(DBGFLAGS)
IFLAGS   = -Iinclude
WFLAGS   = -Wall -Wextra -Wpedantic -Wduplicated-cond -Wduplicated-branches
WFLAGS  += -Wlogical-op -Wnull-dereference -Wjump-misses-init -Wshadow
WFLAGS  += -Wdouble-promotion -Winit-self -Wswitch-default -Wswitch-enum
WFLAGS  += -Wunsafe-loop-optimizations -Wundef -Wconversion -Winline
WFLAGS  += -Waddress -Wsuggest-attribute=pure -Wsuggest-attribute=noreturn
WFLAGS  += -Wsuggest-attribute=cold
COMFLAGS = $(WFLAGS) -static -mthumb -mcpu=$(CPU) $(FPU) -nostartfiles -nostdlib

GCCFLAGS = $(OPTFLAGS) $(IFLAGS) $(COMFLAGS) $(DFLAGS) -c
CXXFLAGS = $(GCCFLAGS) -std=c++17 -fno-rtti -fno-exceptions -fno-threadsafe-statics
CPPFLAGS =
ARFLAGS  =
ASFLAGS  =

all: $(NAME).a

%.o: %.c
	$(ECHO) "GCC\t$@"
	$(GCC) $(GCCFLAGS) $< -o $@

%.o: %.cpp
	$(ECHO) "G++\t$@"
	$(GXX) $(CXXFLAGS) $< -o $@

$(NAME).a: $(OBJECTS)
	$(RM) -f $@
	$(ECHO) "AR\t$@"
	$(AR)  $(ARFLAGS) rcs $@ $^

.PHONY: clean
clean:
	$(RM) -f $(OBJECTS)
	$(RM) -f *.a
