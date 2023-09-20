cmake_minimum_required(VERSION 3.21)

project(dxil VERSION 1.0 DESCRIPTION "dxil")

include(${CMAKE_CURRENT_LIST_DIR}/../../../cmake/build.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/../../../cmake/functions.cmake)

if(${TARGET_BUILD_PLATFORM} STREQUAL "windows")
	add_custom_target(${PROJECT_NAME} ALL DEPENDS ${CMAKE_CURRENT_LIST_DIR}/../../../out/bin/${PROJECT_OUTPUT_SUB_PATH}/dxil.dll)

	add_custom_command(
		OUTPUT
			${CMAKE_CURRENT_LIST_DIR}/../../../out/bin/${PROJECT_OUTPUT_SUB_PATH}/dxil.dll
		COMMAND
			${CMAKE_COMMAND} -E copy
			${CMAKE_CURRENT_LIST_DIR}/windows/x64/dxil.dll
			${CMAKE_CURRENT_LIST_DIR}/../../../out/bin/${PROJECT_OUTPUT_SUB_PATH}/dxil.dll
	)
endif()
