cmake_minimum_required(VERSION 3.15)

project(Riverdi_OS_test LANGUAGES C CXX ASM)

find_bsp(
	ID com.sysprogs.arm.stm32
	VERSION 2024.01
	MCU STM32H757XI
	HWREGISTER_LIST_FILE STM32H7xxxx/DeviceDefinitions/stm32h757xx.xml
	CXX_STANDARD 17
	DISABLE_GNU_EXTENSIONS)

add_bsp_based_executable(
	NAME Riverdi_OS_test
	GENERATE_BIN
	GENERATE_MAP
	OUTPUT_RELOCATION_RECORDS)
