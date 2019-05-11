################################################################################
# 
# The MIT License (MIT)
# Copyright (c) 2019 STMicroelectronics
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
# 
################################################################################

ifndef PROJECT_NAME
	PROJECT_NAME = vesofton
endif

ifdef SHIPPABLE
	CC = arm-none-eabi-gcc
	OBJCOPY = arm-none-eabi-objcopy
else ifndef WIN32
	export PATH := C:\Program Files (x86)\Atollic\TrueSTUDIO for STM32 9.3.0\ARMTools\bin:$(PATH)
	CC = arm-atollic-eabi-gcc
	OBJCOPY = arm-atollic-eabi-objcopy
else 
	SHELL=cmd
 	CC = arm-atollic-eabi-gcc
 	OBJCOPY = arm-atollic-eabi-objcopy
 	PROJECT_NAME = ARM_CORE
endif

RM=rm -rf

# Assembler, Compiler and Linker flags and linker script settings
LINKER_FLAGS=-lm -mthumb -mhard-float -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -Wl,--gc-sections -T$(LINK_SCRIPT) -static  -Wl,--start-group -lc -lm -Wl,--end-group  -specs=nosys.specs  -Wl,-cref "-Wl,-Map=$(BIN_DIR)/ARM_CORE.map" -Wl,--defsym=malloc_getpagesize_P=0x1000
LINK_SCRIPT="stm32f4_flash.ld"
ASSEMBLER_FLAGS=-c -g -O0 -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mthumb -mhard-float  -D"STM32F4XX" -D"STM32F40XX" -D"USE_STDPERIPH_DRIVER"  -x assembler-with-cpp  -Isrc -ILibraries/CMSIS/Include -ILibraries/Device/STM32F4xx/Include -ILibraries/STM32F4xx_StdPeriph_Driver/inc
COMPILER_FLAGS=-c -g -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -O0 -Wall -ffunction-sections -fdata-sections -mthumb -mhard-float  -D"STM32F4XX" -D"STM32F40XX" -D"USE_STDPERIPH_DRIVER"   -Isrc -ILibraries/CMSIS/Include -ILibraries/Device/STM32F4xx/Include -ILibraries/STM32F4xx_StdPeriph_Driver/inc 

# Define output directory
OBJECT_DIR = Debug
BIN_DIR = $(OBJECT_DIR)

# Define sources and objects
SRC := $(wildcard */*/*/*/*/*/*/*.c) \
	$(wildcard */*/*/*/*/*/*.c) \
	$(wildcard */*/*/*/*/*.c) \
	$(wildcard */*/*/*/*.c) \
	$(wildcard */*/*/*.c) \
	$(wildcard */*/*.c) \
	$(wildcard */*.c)
SRCSASM := 	$(wildcard */*/*/*/*/*/*/*/*.s) \
	$(wildcard */*/*/*/*/*/*/*.s) \
	$(wildcard */*/*/*/*/*/*.s) \
	$(wildcard */*/*/*/*/*.s) \
	$(wildcard */*/*/*/*.s) \
	$(wildcard */*/*/*.s) \
	$(wildcard */*/*.s) \
	$(wildcard */*.s)
OBJS := $(SRC:%.c=$(OBJECT_DIR)/%.o) $(SRCSASM:%.s=$(OBJECT_DIR)/%.o)
OBJS := $(OBJS:%.S=$(OBJECT_DIR)/%.o)  

###############
# Build project
# Major targets
###############
all: buildelf

buildelf: $(OBJS) 
	$(CC) -o "$(BIN_DIR)/$(PROJECT_NAME).elf" $(OBJS) $(LINKER_FLAGS)
	$(OBJCOPY) -O ihex "$(BIN_DIR)/$(PROJECT_NAME).elf" "$(BIN_DIR)/$(PROJECT_NAME).hex"


clean:
	$(RM) $(OBJS) "$(BIN_DIR)/$(PROJECT_NAME).elf" "$(BIN_DIR)/$(PROJECT_NAME).hex" "$(BIN_DIR)/$(PROJECT_NAME).map"


##################
# Specific targets
##################
$(OBJECT_DIR)/src/main.o: src/main.c
	$(CC) $(COMPILER_FLAGS) src/main.c -o $(OBJECT_DIR)/src/main.o 


##################
# Implicit targets
##################
$(OBJECT_DIR)/%.o: %.c
	$(CC) $(COMPILER_FLAGS) $< -o $@

$(OBJECT_DIR)/%.o: %.s
	$(CC) $(ASSEMBLER_FLAGS) $< -o $@
	
$(OBJECT_DIR)/%.o: %.S
	$(CC) $(ASSEMBLER_FLAGS) $< -o $@
