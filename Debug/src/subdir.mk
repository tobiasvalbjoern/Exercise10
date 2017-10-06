################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/FileHandler.cpp \
../src/OptChars.cpp \
../src/OptWord.cpp \
../src/Options.cpp \
../src/main.cpp 

OBJS += \
./src/FileHandler.o \
./src/OptChars.o \
./src/OptWord.o \
./src/Options.o \
./src/main.o 

CPP_DEPS += \
./src/FileHandler.d \
./src/OptChars.d \
./src/OptWord.d \
./src/Options.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -ftest-coverage -fprofile-arcs -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


