################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../main.cpp 

OBJS += \
./main.o 

CPP_DEPS += \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	g++ -I"C:\Users\henrico\Documents\vesofton\Software-Ontwikkeling\Qualification\Debug\..\..\googletestlib\include" -I"C:\Users\henrico\Documents\vesofton\Software-Ontwikkeling\work\Source\inc" -I"C:\Users\henrico\Documents\vesofton\Software-Ontwikkeling\work\Source\src" -I../Stubs/src -I../Stubs/inc -O0 -g3 -Wall -c -fmessage-length=0 -std=gnu++11 -D_GLIBCXX_USE_CXX11_ABI=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"

