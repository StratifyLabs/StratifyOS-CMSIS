cmake_minimum_required (VERSION 3.6)


# cmake -P ./bootstrap.cmake

if( ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Darwin" )
	set(SOS_TOOLCHAIN_CMAKE_PATH /Applications/StratifyLabs-SDK/Tools/gcc/arm-none-eabi/cmake)
elseif( ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows" )
	set(SOS_TOOLCHAIN_CMAKE_PATH C:/StratifyLabs-SDK/Tools/gcc/arm-none-eabi/cmake)
elseif( ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux" )
	set(SOS_TOOLCHAIN_CMAKE_PATH /StratifyLabs-SDK/Tools/gcc/arm-none-eabi/cmake)
endif()

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
