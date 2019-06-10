################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Stubs/src/stm32_ub_vga_screen.c 

OBJS += \
./Stubs/src/stm32_ub_vga_screen.o 

C_DEPS += \
./Stubs/src/stm32_ub_vga_screen.d 


# Each subdirectory must supply rules for building sources it contributes
Stubs/src/%.o: ../Stubs/src/%.c
	gcc -I"../../work/Source/inc" -I"../../work/Source/src" -I../Stubs/inc -I../Stubs/src -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"

