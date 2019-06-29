################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Source/src/main/main.c 

OBJS += \
./Source/src/main/main.o 

C_DEPS += \
./Source/src/main/main.d 


# Each subdirectory must supply rules for building sources it contributes
Source/src/main/%.o: ../Source/src/main/%.c
	arm-atollic-eabi-gcc -c "$<" -mthumb -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -std=gnu11 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -DHSE_VALUE=8000000 -I../Libraries/CMSIS/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I../Libraries/Device/STM32F4xx/inc -I../Source/src -I../Source/inc -O0 -ffunction-sections -fdata-sections -g -fstack-usage -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@"

