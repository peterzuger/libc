TARGET_NAME ?= libc
VERBOSE     ?=
DEBUG       ?=

ARCH        ?=
SYS         ?= none
CPU         ?=
FPU         ?= auto
THREADING   ?= 0

BUILD       ?= build
TARGET = $(BUILD)/$(TARGET_NAME).a

#
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

OBJECTS  = $(patsubst %.c,$(BUILD)/%.o,$(CSRC))
OBJECTS += $(patsubst %.S,$(BUILD)/%.o,$(ASRC))

DEPENDENCIES = $(patsubst %.c,$(BUILD)/%.d,$(CSRC))

# Commands
ifeq ($(VERBOSE),1)
	Q =
	RM = rm --verbose
	RMDIR = rmdir --verbose
	MKDIR = mkdir --verbose
else
	Q = @
	RM = @rm
	RMDIR = @rmdir
	MKDIR = @mkdir
endif

ifeq ($(DEBUG),1)
	DBGFLAGS = -g3
else
	DBGFLAGS =
endif

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
CPP  = $(Q)$(CC_VAR)gcc --preprocess
AR   = $(Q)$(CC_VAR)ar
AS   = $(Q)$(CC_VAR)as

ECHO = @echo -e

# Flags
OPTFLAGS += -O2 -ffunction-sections -fdata-sections $(DBGFLAGS)
IFLAGS   += -Iinclude -Iinclude/sys/$(ARCH)/$(SYS)
WFLAGS   += -Wall -Wextra -Wpedantic -Wduplicated-cond -Wduplicated-branches
WFLAGS   += -Wlogical-op -Wnull-dereference -Wshadow -Wformat=2
WFLAGS   += -Wdouble-promotion -Winit-self -Wswitch-default -Wswitch-enum
WFLAGS   += -Wunsafe-loop-optimizations -Wundef -Wconversion -Winline
WFLAGS   += -Waddress -Wjump-misses-init
ifeq ($(DEBUG),1)
	WFLAGS += -Wsuggest-attribute=pure -Wsuggest-attribute=noreturn
endif

ifeq ($(ARCH),thumb)
ARCHFLAGS += -mthumb -mcpu=$(CPU) -mfpu=$(FPU)
else ifeq ($(ARCH),arm)
ARCHFLAGS += -marm -mcpu=$(CPU) -mfpu=$(FPU)
else ifeq ($(ARCH),x86_64)
ifneq ($(CPU),)
ARCHFLAGS += -mtune=$(CPU)
endif
endif

COMFLAGS += $(WFLAGS) $(OPTFLAGS) $(IFLAGS) $(ARCHFLAGS) -static -ffreestanding
COMFLAGS += -nostartfiles -nostdlib -nostdinc -fno-tree-loop-distribute-patterns -fno-stack-protector

GCCFLAGS = $(COMFLAGS) -c
ASFLAGS  = $(COMFLAGS) -c
ARFLAGS  =

# Targets
all: $(TARGET)

$(BUILD)/%.o: %.c
	$(ECHO) "GCC\t$@"
	$(MKDIR) --parents ${dir $@}
	$(GCC) $(GCCFLAGS) -MD -MF $(@:.o=.d) $< -o $@

-include $(DEPENDENCIES)

$(BUILD)/%.o: %.S
	$(ECHO) "GCC\t$@"
	$(GCC) $(ASFLAGS) $< -o $@

$(TARGET): $(OBJECTS)
	$(ECHO) "AR\t$@"
	$(AR) $(ARFLAGS) rcs $@ $^

.PHONY: clean
clean:
	$(RM) -f $(OBJECTS) $(DEPENDENCIES) $(TARGET)
	$(Q)find $(BUILD) -type d -empty -delete || true
