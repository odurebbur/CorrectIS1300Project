################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/OLED/Src/ssd1306.c \
../Drivers/OLED/Src/ssd1306_fonts.c \
../Drivers/OLED/Src/ssd1306_tests.c 

OBJS += \
./Drivers/OLED/Src/ssd1306.o \
./Drivers/OLED/Src/ssd1306_fonts.o \
./Drivers/OLED/Src/ssd1306_tests.o 

C_DEPS += \
./Drivers/OLED/Src/ssd1306.d \
./Drivers/OLED/Src/ssd1306_fonts.d \
./Drivers/OLED/Src/ssd1306_tests.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/OLED/Src/%.o Drivers/OLED/Src/%.su Drivers/OLED/Src/%.cyclo: ../Drivers/OLED/Src/%.c Drivers/OLED/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -c -I../Core/Inc -I"/Users/isabellalopiano/STM32CubeIDE/workspace_1.19.0/IS1300Project/Drivers/OLED" -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-OLED-2f-Src

clean-Drivers-2f-OLED-2f-Src:
	-$(RM) ./Drivers/OLED/Src/ssd1306.cyclo ./Drivers/OLED/Src/ssd1306.d ./Drivers/OLED/Src/ssd1306.o ./Drivers/OLED/Src/ssd1306.su ./Drivers/OLED/Src/ssd1306_fonts.cyclo ./Drivers/OLED/Src/ssd1306_fonts.d ./Drivers/OLED/Src/ssd1306_fonts.o ./Drivers/OLED/Src/ssd1306_fonts.su ./Drivers/OLED/Src/ssd1306_tests.cyclo ./Drivers/OLED/Src/ssd1306_tests.d ./Drivers/OLED/Src/ssd1306_tests.o ./Drivers/OLED/Src/ssd1306_tests.su

.PHONY: clean-Drivers-2f-OLED-2f-Src

