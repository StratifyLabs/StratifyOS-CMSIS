cmake_minimum_required (VERSION 3.6)


# cmake -P ./stratify-cmsis.cmake

if( ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Darwin" )
set(SOS_TOOLCHAIN_CMAKE_PATH /Applications/StratifyLabs-SDK/Tools/gcc/arm-none-eabi/cmake)
endif()
if( ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows" )
  set(SOS_TOOLCHAIN_CMAKE_PATH C:/StratifyLabs-SDK/Tools/gcc/arm-none-eabi/cmake)
endif()
include(${SOS_TOOLCHAIN_CMAKE_PATH}/sos-sdk.cmake)

sos_sdk_clone_or_pull(./CMSIS_5 https://github.com/ARM-software/CMSIS_5.git ./)

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
    execute_process(COMMAND cmake -DPATH=${FOLDER} -P /Applications/StratifyLabs-SDK/Tools/gcc/arm-none-eabi/cmake/generate_sources.cmake)
endforeach()