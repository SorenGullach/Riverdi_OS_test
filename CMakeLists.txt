cmake_minimum_required(VERSION 3.15)

project(Riverdi_OS_test LANGUAGES C CXX ASM)

find_bsp(
	ID com.sysprogs.arm.stm32
	VERSION 2024.01
	MCU STM32H757XI
	HWREGISTER_LIST_FILE STM32H7xxxx/DeviceDefinitions/stm32h757xx.xml
	CXX_STANDARD 17
	DISABLE_GNU_EXTENSIONS)

	bsp_include_directories(
		${BSP_ROOT}/STM32H7xxxx/CMSIS_HAL/Device/ST/STM32H7xx/Include
		${BSP_ROOT}/STM32H7xxxx/CMSIS_HAL/Core/Include
	)

add_bsp_based_executable(
	NAME Riverdi_OS_test
	GENERATE_BIN
	GENERATE_MAP
	OUTPUT_RELOCATION_RECORDS
	SOURCES
		osSTM32H7xx/DSI.cpp
		osSTM32H7xx/DSI.h
		osSTM32H7xx/FMC.cpp
		osSTM32H7xx/FMC.h
		osSTM32H7xx/GPIO.h
		osSTM32H7xx/HSEM.cpp
		osSTM32H7xx/HSEM.h
		osSTM32H7xx/I2C.h
		osSTM32H7xx/LTDC.cpp
		osSTM32H7xx/LTDC.h
		osSTM32H7xx/MemoryDefs.h
		osSTM32H7xx/MPU.h
		osSTM32H7xx/PWR.h
		osSTM32H7xx/RCC.cpp
		osSTM32H7xx/RCC.h
		osSTM32H7xx/Registers.h
		osSTM32H7xx/StartupSemafor.cpp
		osSTM32H7xx/StartupSemafor.h
		osSTM32H7xx/SystemInit.h
		osSTM32H7xx/SystemInitCM7.cpp
		osSTM32H7xx/SysTick.cpp
		osSTM32H7xx/SysTick.h
		osSTM32H7xx/Timers.cpp
		osSTM32H7xx/Timers.h
		osSTM32H7xx/Utils.cpp
		osSTM32H7xx/Utils.h
		glSTM32H7xx/glButton.cpp
		glSTM32H7xx/glButton.h
		glSTM32H7xx/glColorTable.h
		glSTM32H7xx/glLabel.h
		glSTM32H7xx/glMain.cpp
		glSTM32H7xx/glMain.h
		glSTM32H7xx/glPage.h
		glSTM32H7xx/glPrimitives.cpp
		glSTM32H7xx/glPrimitives.h
		glSTM32H7xx/glTypes.h
		glSTM32H7xx/Fonts/Arial_16_1.cpp
		glSTM32H7xx/Fonts/Arial_16_2.cpp
		glSTM32H7xx/Fonts/Arial_18_1.cpp
		glSTM32H7xx/Fonts/Arial_18_2.cpp
		glSTM32H7xx/Fonts/Arial_20_1.cpp
		glSTM32H7xx/Fonts/Arial_20_2.cpp
		glSTM32H7xx/Fonts/Arial_22_1.cpp
		glSTM32H7xx/Fonts/Arial_22_2.cpp
		glSTM32H7xx/Fonts/Arial_24_1.cpp
		glSTM32H7xx/Fonts/Arial_24_2.cpp
		glSTM32H7xx/Fonts/Arial_26_1.cpp
		glSTM32H7xx/Fonts/Arial_26_2.cpp
		glSTM32H7xx/Fonts/Arial_28_1.cpp
		glSTM32H7xx/Fonts/Arial_28_2.cpp
		glSTM32H7xx/Fonts/Arial_95_1.cpp
		glSTM32H7xx/Fonts/Arial_95_2.cpp
		glSTM32H7xx/Fonts/GUIFont.h
		TFTDisplay.cpp
		TFTDisplay.h
		TFT_Setup.h
		TPDisplay.cpp
		TPDisplay.h
		GUIApplication.h
		Main.cpp
	LINKER_SCRIPT STM32H757XI_flash.lds)

target_include_directories(Riverdi_OS_test PRIVATE
		${BSP_ROOT}/STM32H7xxxx/CMSIS_HAL/Device/ST/STM32H7xx/Include
		${BSP_ROOT}/STM32H7xxxx/CMSIS_HAL/Core/Include
	glSTM32H7xx
	glSTM32H7xx/Fonts
	osSTM32H7xx
)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "DEBUG")
target_compile_definitions(Riverdi_OS_test PRIVATE STM32H757xx DEBUG DEBUG_DEFAULT_INTERRUPT_HANDLERS)
    message(STATUS "Setting debug flags...")
	target_compile_options(Riverdi_OS_test PRIVATE -O0 -Wall -Wextra -Werror -fanalyzer -pedantic-errors)
	message(STATUS "CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS_DEBUG})
endif()

if ("${CMAKE_BUILD_TYPE}" STREQUAL "RELEASE")
target_compile_definitions(Riverdi_OS_test PRIVATE STM32H757xx RELEASE)
    message(STATUS "Setting release flags...")
	target_compile_options(Riverdi_OS_test PRIVATE -O3 -Wall -Wextra -Werror -fanalyzer -pedantic-errors)
	message(STATUS "CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS_RELEASE})
endif()

