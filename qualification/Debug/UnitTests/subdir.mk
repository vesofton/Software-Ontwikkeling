################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../UnitTests/test_line.cpp \
../UnitTests/test_rectangle.cpp 

OBJS += \
./UnitTests/test_line.o \
./UnitTests/test_rectangle.o 

CPP_DEPS += \
./UnitTests/test_line.d \
./UnitTests/test_rectangle.d 


# Each subdirectory must supply rules for building sources it contributes
UnitTests/%.o: ../UnitTests/%.cpp
	g++ -I"C:\Users\henrico\Documents\vesofton\Software-Ontwikkeling\qualification\Debug\..\..\googletestlib\include" -I"C:\Users\henrico\Documents\vesofton\Software-Ontwikkeling\work\Source\inc" -I"C:\Users\henrico\Documents\vesofton\Software-Ontwikkeling\work\Source\src" -I../Stubs/src -I../Stubs/inc -O0 -g3 -Wall -c -fmessage-length=0 -std=gnu++11 -D_GLIBCXX_USE_CXX11_ABI=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"

