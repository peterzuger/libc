TARGET_NAME ?= libc
VERBOSE     ?=
DEBUG       ?=

EXCEPTIONS ?=
RTTI       ?=
THREADING  ?=

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
WFLAGS  += -Wlogical-op -Wnull-dereference -Wshadow
WFLAGS  += -Wdouble-promotion -Winit-self -Wswitch-default -Wswitch-enum
WFLAGS  += -Wunsafe-loop-optimizations -Wundef -Wconversion -Winline
WFLAGS  += -Waddress -Wsuggest-attribute=pure -Wsuggest-attribute=noreturn
CWFLAGS  = -Wjump-misses-init
COMFLAGS = $(WFLAGS) -static -mthumb -mcpu=$(CPU) $(FPU) -nostartfiles -nostdlib
COMFLAGS += $(OPTFLAGS) $(IFLAGS) $(DFLAGS)

GCCFLAGS = $(COMFLAGS) -c $(CWFLAGS)
CXXFLAGS = $(COMFLAGS) -c -std=c++17
CPPFLAGS =
ARFLAGS  =
ASFLAGS  =

ifeq ($(EXCEPTIONS), 1)
	CXXFLAGS +=
else
	CXXFLAGS += -fno-exceptions
endif

ifeq ($(RTTI), 1)
	CXXFLAGS +=
else
	CXXFLAGS += -fno-rtti
endif

ifeq ($(THREADING), 1)
	CXXFLAGS +=
else
	CXXFLAGS += -fno-threadsafe-statics
endif

all: $(TARGET_NAME).a

%.o: %.c
	$(ECHO) "GCC\t$@"
	$(GCC) $(GCCFLAGS) $< -o $@

%.o: %.cpp
	$(ECHO) "G++\t$@"
	$(GXX) $(CXXFLAGS) $< -o $@

$(TARGET_NAME).a: $(OBJECTS)
	$(RM) -f $@
	$(ECHO) "AR\t$@"
	$(AR)  $(ARFLAGS) rcs $@ $^

.PHONY: clean
clean:
	$(RM) -f $(OBJECTS)
	$(RM) -f $(TARGET_NAME).a
