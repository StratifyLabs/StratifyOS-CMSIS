cmake_minimum_required (VERSION 3.6)


# cmake -P ./bootstrap.cmake

# Grab the SDK location
if(NOT DEFINED SOS_SDK_PATH)
	if(DEFINED ENV{SOS_SDK_PATH})
		set(SOS_SDK_PATH $ENV{SOS_SDK_PATH})
	elseif( ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Darwin" )
		message(WARNING "default SDK locations are deprecated")
		set(SOS_SDK_PATH /Applications/StratifyLabs-SDK)
	elseif( ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows" )
		message(WARNING "default SDK locations are deprecated")
		set(SOS_SDK_PATH C:/StratifyLabs-SDK)
	elseif( ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux" )
		message(WARNING "default SDK locations are deprecated")
		set(SOS_SDK_PATH /StratifyLabs-SDK)
	endif()
endif()
if(NOT DEFINED SOS_SDK_PATH)
	message(FATAL_ERROR "Please set environment variable SOS_SDK_PATH to location of the StratifyLabs-SDK directory")
endif()
set(SOS_TOOLCHAIN_CMAKE_PATH ${SOS_SDK_PATH}/Tools/gcc/arm-none-eabi/cmake)
include(${SOS_TOOLCHAIN_CMAKE_PATH}/sos-sdk.cmake)

set(CMSIS_DIRECTORY ${CMAKE_SOURCE_DIR}/CMSIS_5)
if(EXISTS  ${CMSIS_DIRECTORY})
	message("CMSIS 5 project has already been cloned -- delete to pull again")
else()
	sos_sdk_clone_or_pull(${CMSIS_DIRECTORY} https://github.com/ARM-software/CMSIS_5.git ./)
	sos_sdk_checkout(${CMSIS_DIRECTORY} "tags/5.4.0")
endif()


set(FOLDER_LIST
    ./CMSIS_5/CMSIS/DSP/Source/BasicMathFunctions
    ./CMSIS_5/CMSIS/DSP/Source/CommonTables
    ./CMSIS_5/CMSIS/DSP/Source/ComplexMathFunctions
    ./CMSIS_5/CMSIS/DSP/Source/ControllerFunctions
    ./CMSIS_5/CMSIS/DSP/Source/FastMathFunctions
    ./CMSIS_5/CMSIS/DSP/Source/FilteringFunctions
    ./CMSIS_5/CMSIS/DSP/Source/MatrixFunctions
    ./CMSIS_5/CMSIS/DSP/Source/StatisticsFunctions
    ./CMSIS_5/CMSIS/DSP/Source/SupportFunctions
    ./CMSIS_5/CMSIS/DSP/Source/TransformFunctions
)

foreach(FOLDER ${FOLDER_LIST})
    execute_process(COMMAND cmake -DPATH=${FOLDER} -P ${SOS_TOOLCHAIN_CMAKE_PATH}/generate_sources.cmake)
endforeach()
