NAME ?=libc
MCPU ?=

ifdef VERBOSE
	Q =
else
	Q = @
endif

CHDR  = $(wildcard include/*.h)
CHDR += $(wildcard include/types/*.h)
CHDR += $(wildcard include/macros/*.h)

CSRC  = $(wildcard src/*.c)
CSRC += $(wildcard src/stdlib/*.c)
CSRC += $(wildcard src/stdio/*.c)
CSRC += $(wildcard src/string/*.c)
CSRC += $(wildcard src/complex/*.c)
CSRC += $(wildcard src/inttypes/*.c)

HDR_OBJECTS = $(CHDR:.h=.j)
OBJECTS = $(CSRC:.c=.o)

CC=arm-none-eabi-
GCC     = $(CC)gcc
GXX     = $(CC)g++
CPP     = $(CC)gcc -E
AR      = $(CC)ar
AS      = $(CC)as
ECHO    = echo -e

DFLAGS  =
OPTFLAGS= -O2
IFLAGS  = -Iinclude
WFLAGS  = -Wall -Wextra -Wpedantic -Wduplicated-cond -Wduplicated-branches
WFLAGS += -Wlogical-op -Wnull-dereference -Wjump-misses-init -Wshadow
WFLAGS += -Wdouble-promotion -Wchkp -Winit-self -Wswitch-default -Wswitch-enum
WFLAGS += -Wunsafe-loop-optimizations -Wundef -Wconversion -Winline
COMFLAGS= $(WFLAGS) -static -mthumb -mcpu=$(MCPU) -nostartfiles -nostdlib

GCCFLAGS= $(OPTFLAGS) $(IFLAGS) $(COMFLAGS) $(DFLAGS) -c
HCCFLAGS=             $(IFLAGS) $(COMFLAGS) $(DFLAGS) -fsyntax-only
CXXFLAGS= $(OPTFLAGS) $(IFLAGS) $(COMFLAGS) $(DFLAGS) -c -std=c++17 -fno-rtti
CPPFLAGS=
ARFLAGS =
ASFLAGS =

all: $(NAME).a
headercheck: $(HDR_OBJECTS)

%.o: %.c
	@$(ECHO) "GCC\t$@"
	$(Q)$(GCC) $(GCCFLAGS) $< -o $@

%.o: %.cpp
	@$(ECHO) "G++\t$@"
	$(Q)$(GXX) $(CXXFLAGS) $< -o $@

.PHONY: %.j
%.j: %.h
	@$(ECHO) "GCC\ttesting $<"
	$(Q)$(GCC) $(HCCFLAGS) -Wno-pedantic $<

$(NAME).a: $(OBJECTS)
	$(Q)rm -fv $@
	@$(ECHO) "AR\t$@"
	$(Q)$(Q)$(AR)  $(ARFLAGS) rcs $@ $^


.PHONY: clean clean_all
clean:
	$(Q)rm -fv $(OBJECTS)

clean_all: clean
	$(Q)rm -fv *.a
