
include(${SOS_TOOLCHAIN_CMAKE_PATH}/sos-sdk.cmake)
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/CMSIS_5/CMSIS/DSP/Source)

#Add sources to the project
set(FOLDER_LIST 
    BasicMathFunctions  
    CommonTables  
		ComplexMathFunctions
		ControllerFunctions
    FastMathFunctions  
		FilteringFunctions
		MatrixFunctions
    StatisticsFunctions  
    SupportFunctions  
    TransformFunctions  
)
foreach(FOLDER ${FOLDER_LIST})
		sos_sdk_add_subdirectory(SOURCELIST ${SOURCE_DIR}/${FOLDER})
endforeach()

set(SOS_SOURCELIST
	${SOURCELIST}
	${CMAKE_SOURCE_DIR}/arm_dsp_api.h
	${CMAKE_SOURCE_DIR}/arm_dsp_api.c
	${CMAKE_SOURCE_DIR}/arm_dsp_api_declaration.h
	)

# Linking with the kernel
option(BUILD_KERNEL "Build library for linking with kernel (default)" ON)
if(BUILD_KERNEL)
set(SOS_CONFIG release)
set(SOS_INCLUDE_DIRECTORIES ${SOURCE_DIR}/../Include ${TOOLCHAIN_INC_DIR}/mcu/arch/cmsis)
set(SOS_OPTION kernel)
set(SOS_DEFINITIONS -DSOS_ARM_DSP_FFT_MAX_SIZE=65536)
include(${SOS_TOOLCHAIN_CMAKE_PATH}/sos-lib-std.cmake)
endif()

# Linking with the kernel -- FFT size limits 512
option(BUILD_FFT_512 "Build FFT with size limits of 512" OFF)
if(BUILD_FFT_512)
set(SOS_CONFIG release)
set(SOS_INCLUDE_DIRECTORIES ${SOURCE_DIR}/../Include ${TOOLCHAIN_INC_DIR}/mcu/arch/cmsis)
set(SOS_OPTION kernel_fft_512)
set(SOS_DEFINITIONS -DSOS_ARM_DSP_FFT_MAX_SIZE=512)
include(${SOS_TOOLCHAIN_CMAKE_PATH}/sos-lib-std.cmake)
endif()

# Linking with the kernel -- FFT size limits 256
option(BUILD_FFT_256 "Build FFT with size limits of 256" OFF)
if(BUILD_FFT_256)
set(SOS_CONFIG release)
set(SOS_INCLUDE_DIRECTORIES ${SOURCE_DIR}/../Include ${TOOLCHAIN_INC_DIR}/mcu/arch/cmsis)
set(SOS_OPTION kernel_fft_256)
set(SOS_DEFINITIONS -DSOS_ARM_DSP_FFT_MAX_SIZE=256)
include(${SOS_TOOLCHAIN_CMAKE_PATH}/sos-lib-std.cmake)
endif()

# Linking with the kernel -- FFT size limits 128
option(BUILD_FFT_128 "Build FFT with size limits of 128" OFF)
if(BUILD_FFT_128)
set(SOS_CONFIG release)
set(SOS_INCLUDE_DIRECTORIES ${SOURCE_DIR}/../Include ${TOOLCHAIN_INC_DIR}/mcu/arch/cmsis)
set(SOS_OPTION kernel_fft_128)
set(SOS_DEFINITIONS -DSOS_ARM_DSP_FFT_MAX_SIZE=128)
include(${SOS_TOOLCHAIN_CMAKE_PATH}/sos-lib-std.cmake)
endif()

# Linking with the kernel -- FFT size limits 64
option(BUILD_FFT_64 "Build FFT with size limits of 64" OFF)
if(BUILD_FFT_64)
set(SOS_CONFIG release)
set(SOS_INCLUDE_DIRECTORIES ${SOURCE_DIR}/../Include ${TOOLCHAIN_INC_DIR}/mcu/arch/cmsis)
set(SOS_OPTION kernel_fft_64)
set(SOS_DEFINITIONS -DSOS_ARM_DSP_FFT_MAX_SIZE=64)
include(${SOS_TOOLCHAIN_CMAKE_PATH}/sos-lib-std.cmake)
endif()

# Link within an app
option(BUILD_APP "Build libraries for direct linking with app (uncommon)" OFF)
if(BUILD_APP)
set(SOS_OPTION "")
set(SOS_CONFIG release)
set(SOS_BUILD_FLAGS -mlong-calls)
set(SOS_DEFINITIONS -DSOS_ARM_DSP_FFT_MAX_SIZE=65536)
include(${SOS_TOOLCHAIN_CMAKE_PATH}/sos-lib-std.cmake)
endif()


install(DIRECTORY ${SOURCE_DIR}/../Include/ DESTINATION ${TOOLCHAIN_INC_DIR}/mcu/arch/cmsis)
install(FILES ${CMAKE_SOURCE_DIR}/arm_dsp_api.h ${CMAKE_SOURCE_DIR}/arm_dsp_api_declaration.h DESTINATION include)

