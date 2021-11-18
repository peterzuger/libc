TARGET_NAME ?= libc
VERBOSE     ?=
DEBUG       ?=

ARCH        ?= thumb
SYS         ?= none
CPU         ?= cortex-m4
FPU         ?= auto
MULTITHREAD ?= 0

ifeq ($(VERBOSE),1)
	Q =
else
	Q = @
endif

CSRC  = $(wildcard src/*.c)
CSRC += $(wildcard src/complex/*.c)
CSRC += $(wildcard src/ctype/*.c)
CSRC += $(wildcard src/fenv/*.c)
CSRC += $(wildcard src/inttypes/*.c)
CSRC += $(wildcard src/locale/*.c)
CSRC += $(wildcard src/signal/*.c)
CSRC += $(wildcard src/stdio/*.c)
CSRC += $(wildcard src/stdlib/*.c)
CSRC += $(wildcard src/string/*.c)
CSRC += $(wildcard src/wchar/*.c)

CSRC += $(wildcard src/sys/$(ARCH)/*.c)
ASRC  = $(wildcard src/sys/$(ARCH)/*.S)
CSRC += $(wildcard src/sys/$(ARCH)/$(SYS)/*.c)
ASRC  = $(wildcard src/sys/$(ARCH)/$(SYS)/*.S)

OBJECTS  = $(CSRC:.c=.o)
OBJECTS += $(ASRC:.S=.o)

ifeq ($(ARCH),arm)
CC_VAR = arm-none-eabi-
else ifeq ($(ARCH),thumb)
CC_VAR = arm-none-eabi-
else ifeq ($(ARCH),x86_64)
CC_VAR =
else
$(error Unknown ARCH)
endif

CC   = $(Q)$(CC_VAR)gcc
GCC  = $(Q)$(CC_VAR)gcc
GXX  = $(Q)$(CC_VAR)g++
CPP  = $(Q)$(CC_VAR)gcc -E
AR   = $(Q)$(CC_VAR)ar
AS   = $(Q)$(CC_VAR)as

ECHO = @echo -e

ifeq ($(VERBOSE),1)
	RM = rm -v
else
	RM = @rm
endif

ifeq ($(DEBUG),1)
	DBGFLAGS = -g3
else
	DBGFLAGS =
endif

OPTFLAGS = -O2 -ffunction-sections -fdata-sections $(DBGFLAGS)
IFLAGS   = -Iinclude -Iinclude/sys/$(ARCH)/$(SYS)
WFLAGS   = -Wall -Wextra -Wpedantic -Wduplicated-cond -Wduplicated-branches
WFLAGS  += -Wlogical-op -Wnull-dereference -Wshadow -Wformat=2
WFLAGS  += -Wdouble-promotion -Winit-self -Wswitch-default -Wswitch-enum
WFLAGS  += -Wunsafe-loop-optimizations -Wundef -Wconversion -Winline
WFLAGS  += -Waddress -Wjump-misses-init
ifeq ($(DEBUG),1)
	WFLAGS += -Wsuggest-attribute=pure -Wsuggest-attribute=noreturn
endif

COMFLAGS  = $(WFLAGS) $(OPTFLAGS) $(IFLAGS) -static -ffreestanding
COMFLAGS += -nostartfiles -nostdlib -nostdinc -fno-tree-loop-distribute-patterns -fno-stack-protector
ifeq ($(ARCH),thumb)
COMFLAGS += -mthumb -mcpu=$(CPU) -mfpu=$(FPU)
else ifeq ($(ARCH),arm)
COMFLAGS += -marm -mcpu=$(CPU) -mfpu=$(FPU)
else ifeq ($(ARCH),x86_64)
COMFLAGS += -mtune=$(CPU)
endif

GCCFLAGS = $(COMFLAGS) -c
ARFLAGS  =
ASFLAGS  = $(COMFLAGS) -c

all: $(TARGET_NAME).a

%.o: %.c
	$(ECHO) "GCC\t$@"
	$(GCC) $(GCCFLAGS) $< -o $@

%.o: %.S
	$(ECHO) "GCC\t$@"
	$(GCC) $(ASFLAGS) $< -o $@

$(TARGET_NAME).a: $(OBJECTS)
	$(RM) -f $@
	$(ECHO) "AR\t$@"
	$(AR) $(ARFLAGS) rcs $@ $^

.PHONY: clean
clean:
	$(RM) -f $(OBJECTS)
	$(RM) -f $(TARGET_NAME).a
