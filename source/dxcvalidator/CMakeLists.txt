cmake_minimum_required(VERSION 3.21)

project(dxcvalidator CXX)

include(${CMAKE_CURRENT_LIST_DIR}/../../cmake/build.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/../../cmake/functions.cmake)

file(GLOB_RECURSE PROJECT_SOURCE_FILES *.cpp)

add_library(${PROJECT_NAME} STATIC ${PROJECT_SOURCE_FILES})

set_target_cxx_standard(${PROJECT_NAME} 17)
set_target_c_standard(${PROJECT_NAME} 11)
set_target_properties(${PROJECT_NAME} PROPERTIES POSITION_INDEPENDENT_CODE TRUE)
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(
	${PROJECT_NAME}
	BEFORE
	PRIVATE
	../../include/
	../../include/dxc/Tracing/
	../../include/llvm/llvm-assert/
)


target_compile_definitions(${PROJECT_NAME} PRIVATE ENABLE_SPIRV_CODEGEN=1)
target_compile_definitions(${PROJECT_NAME} PRIVATE _CRT_SECURE_NO_DEPRECATE)
target_compile_definitions(${PROJECT_NAME} PRIVATE _CRT_SECURE_NO_WARNINGS)
target_compile_definitions(${PROJECT_NAME} PRIVATE _CRT_NONSTDC_NO_DEPRECATE)
target_compile_definitions(${PROJECT_NAME} PRIVATE _CRT_NONSTDC_NO_WARNINGS)
target_compile_definitions(${PROJECT_NAME} PRIVATE _SCL_SECURE_NO_DEPRECATE)
target_compile_definitions(${PROJECT_NAME} PRIVATE _SCL_SECURE_NO_WARNINGS)
target_compile_definitions(${PROJECT_NAME} PRIVATE __STDC_CONSTANT_MACROS)
target_compile_definitions(${PROJECT_NAME} PRIVATE __STDC_FORMAT_MACROS)
target_compile_definitions(${PROJECT_NAME} PRIVATE __STDC_LIMIT_MACROS)
target_compile_definitions(${PROJECT_NAME} PRIVATE _GNU_SOURCE)
target_compile_definitions(${PROJECT_NAME} PRIVATE _CINDEX_LIB_=)
target_compile_definitions(${PROJECT_NAME} PRIVATE LIBCLANG_CC=)

if (NOT MSVC)
	target_compile_definitions(${PROJECT_NAME} PRIVATE "__EMULATE_UUID=1")
endif()

set(EXPORT_VISIBLE true)
include(${CMAKE_CURRENT_LIST_DIR}/../../cmake/default_target_settings.cmake)

