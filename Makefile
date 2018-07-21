NAME ?=libc
MCPU ?=

ifdef VERBOSE
	Q =
else
	Q = @
endif


INC  = include
SRC  = $(wildcard src/*.c)
SRC += $(wildcard src/stdlib/*.c)
SRC += $(wildcard src/complex/*.c)

OBJECTS = $(SRC:.c=.o)

CC=arm-none-eabi-
GCC     = $(CC)gcc
G++     = $(CC)g++
CPP     = $(CC)gcc -E
AR      = $(CC)ar
AS      = $(CC)as
ECHO    = echo -e

DFLAGS  =
OPTFLAGS= -O2
IFLAGS  = -I$(INC)
WFLAGS  = -Wall -Wextra -Wpedantic -Wduplicated-cond -Wduplicated-branches
WFLAGS += -Wlogical-op -Wnull-dereference -Wjump-misses-init -Wshadow
WFLAGS += -Wdouble-promotion -Wchkp -Winit-self -Wswitch-default -Wswitch-enum
WFLAGS += -Wunsafe-loop-optimizations -Wundef -Wconversion -Winline
COMFLAGS= $(WFLAGS) -static -mthumb -mcpu=$(MCPU) -nostartfiles -nostdlib

GCCFLAGS= $(OPTFLAGS) $(IFLAGS) $(COMFLAGS) $(DFLAGS) -c
C++FLAGS= $(OPTFLAGS) $(IFLAGS) $(COMFLAGS) $(DFLAGS) -c -std=c++17 -fno-rtti
CPPFLAGS=
ARFLAGS =
ASFLAGS =

all: $(NAME).a

%.o: %.c
	@$(ECHO) "GCC\t$@"
	$(Q)$(GCC) $(GCCFLAGS) $< -o $@

%.o: %.cpp
	@$(ECHO) "G++\t$@"
	$(Q)$(G++) $(C++FLAGS) $< -o $@


$(NAME).a: $(OBJECTS)
	@$(ECHO) "AR\t$@"
	$(Q)$(Q)$(AR)  $(ARFLAGS) rcsv $@ $^


.PHONY: clean clean_all
clean:
	$(Q)rm -fv $(OBJECTS)

clean_all: clean
	$(Q)rm -fv *.a
