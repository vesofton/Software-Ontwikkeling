################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/Device/STM32F4xx/Include/stm32_ub_vga_screen.c 

OBJS += \
./Libraries/Device/STM32F4xx/Include/stm32_ub_vga_screen.o 

C_DEPS += \
./Libraries/Device/STM32F4xx/Include/stm32_ub_vga_screen.d 


# Each subdirectory must supply rules for building sources it contributes
Libraries/Device/STM32F4xx/Include/%.o: ../Libraries/Device/STM32F4xx/Include/%.c
	arm-atollic-eabi-gcc -c "$<" -mthumb -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -std=gnu11 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -O0 -ffunction-sections -fdata-sections -g -fstack-usage -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@"
