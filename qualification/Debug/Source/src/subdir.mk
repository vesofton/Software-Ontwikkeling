################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../../work/Source/src/draw_line.c \
../../work/Source/src/draw_rectangle.c 

OBJS += \
./Source/src/draw_line.o \
./Source/src/draw_rectangle.o 

C_DEPS += \
./Source/src/draw_line.d \
./Source/src/draw_rectangle.d 


# Each subdirectory must supply rules for building sources it contributes
Source/src/draw_line.o: ../../work/Source/src/draw_line.c
	gcc -I"../../work/Source/inc" -I"../../worw/Source/src" -I../Stubs/inc -I../Stubs/src -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
Source/src/draw_rectangle.o: ../../work/Source/src/draw_rectangle.c
	gcc -I"../../work/Source/inc" -I"../../work/Source/src" -I../Stubs/inc -I../Stubs/src -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"

