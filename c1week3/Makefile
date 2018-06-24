#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# Makefile for host or MSP432 embedded system platform.
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <FILE>.i - Builds <FILE>.i preprocessed output file
#      <FILE>.asm - Builds <FILE>.asm assembly output file and final executable
#      <FILE>.o - Builds <FILE>.o object file
#      compile-all - Compile all object files, but does not link
#      build - Builds and links all source files
#      clean - Removes all generated files
#
# Platform Overrides:
#      PLATFORM - Target platform (HOST or MSP432)
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
#PLATFORM = $(PLATFORM)

TARGET = c1m3
INC_PARAMS = $(INCLUDES:%=-I%)
PLAT_PARAMS = -D$(PLATFORM)

ifeq ($(PLATFORM),HOST)
  # Compiler Flags and Defines
  CC = gcc
  AS = as
  LD = ld
  SIZE = size
  OBJDUMP = objdump
  LDFLAGS = -Wl,-Map=$(TARGET).map
  CFLAGS = -Wall -Werror -g -O0 -std=c99
  CPPFLAGS = $(INC_PARAMS) $(PLAT_PARAMS) -MD
else ifeq ($(PLATFORM),MSP432)
  # Architectures Specific Flags
  CPU = cortex-m4
  ARCH = thumb
  SPECS = nosys.specs
  MARCH = armv7e-m
  FLOAT_ABI = hard
  FPU = fpv4-sp-d16

  # Platform Specific Flags
  LINKER_FILE = msp432p401r.lds

  # Compiler Flags and Defines
  CC = arm-none-eabi-gcc
  AS = arm-none-eabi-as
  LD = arm-none-eabi-ld
  SIZE = arm-none-eabi-size
  OBJDUMP = arm-none-eabi-objdump
  LDFLAGS = -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
  CFLAGS = -mcpu=$(CPU) -m$(ARCH) -march=$(MARCH) -mfloat-abi=$(FLOAT_ABI) \
           -mfpu=$(FPU) --specs=$(SPECS) -Wall -Werror -g -O0 -std=c99
  CPPFLAGS = $(INC_PARAMS) $(PLAT_PARAMS) -MD
endif

OBJS = $(SOURCES:.c=.o)
DEPS = $(SOURCES:.c=.d)
PRES = $(SOURCES:.c=.i)
ASMS = $(SOURCES:.c=.asm)

%.i : %.c
	$(CC) -E $< $(CPPFLAGS) -o $@

%.asm : %.c
	$(CC) -S $< $(CPPFLAGS) $(CFLAGS) -o $@
	$(AS) $@ -o project.out
	$(OBJDUMP) -D project.out > project.asm

%.o : %.c	
	$(CC) -c $< $(CPPFLAGS) $(CFLAGS) -o $@

.PHONY: compile-all
compile-all: $(OBJS)

.PHONY: build
build: $(TARGET).out

$(TARGET).out: $(OBJS)
	$(CC) $(OBJS) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -o $@
	$(SIZE) $@ $(OBJS)

.PHONY: clean
clean:
	rm -f $(OBJS) $(DEPS) $(PRES) $(ASMS) $(TARGET).out $(TARGET).map \
              project.asm project.out


