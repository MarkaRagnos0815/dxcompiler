

if(${TARGET_BUILD_PLATFORM} STREQUAL "android")
	target_compile_definitions(${PROJECT_NAME} PRIVATE ANDROID)
	target_compile_definitions(${PROJECT_NAME} PRIVATE _ANDROID)
	target_compile_definitions(${PROJECT_NAME} PRIVATE __ANDROID__)
	target_link_options(${PROJECT_NAME} PRIVATE -Wl,--no-undefined)
elseif(${TARGET_BUILD_PLATFORM} STREQUAL "windows")
	target_compile_definitions(${PROJECT_NAME} PRIVATE WIN32)
	target_compile_definitions(${PROJECT_NAME} PRIVATE _WIN32)
elseif(${TARGET_BUILD_PLATFORM} STREQUAL "linux")
	target_compile_definitions(${PROJECT_NAME} PRIVATE LINUX)
	target_compile_definitions(${PROJECT_NAME} PRIVATE _LINUX)
	if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
		target_compile_options(${PROJECT_NAME} PRIVATE -stdlib=libc++)
		target_compile_options(${PROJECT_NAME} PRIVATE -fvisibility=hidden)
		target_link_options(${PROJECT_NAME} PRIVATE -stdlib=libc++)
	endif()	
endif()

string(REGEX REPLACE "([\\/\\-]O)3" "\\12" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
string(REGEX REPLACE "([\\/\\-]O)3" "\\12" CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}")
string(REGEX REPLACE "([\\/\\-]O)3" "\\12" CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
string(REGEX REPLACE "([\\/\\-]O)3" "\\12" CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE}")

target_compile_definitions(${PROJECT_NAME} PUBLIC
	  $<$<CONFIG:Debug>:_DEBUG>
      $<$<CONFIG:Release>:NDEBUG>
)

if (MSVC)
	target_compile_options(${PROJECT_NAME} PRIVATE /W0)
	target_compile_options(${PROJECT_NAME} PRIVATE /MP)
	target_compile_options(${PROJECT_NAME} PRIVATE /bigobj)
	target_compile_options(${PROJECT_NAME} PRIVATE /I"$(VsInstallDir)/DIA SDK/Include")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4146")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4180")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4244")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4258")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4267")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4291")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4345")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4351")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4355")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4456")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4457")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4458")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4459")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4503")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4624")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4722")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4800")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4100")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4127")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4512")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4505")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4610")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4510")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4702")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4245")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4706")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4310")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4701")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4703")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4389")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4611")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4805")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4204")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4324")
	target_compile_options(${PROJECT_NAME} PRIVATE /wd"4996")
else()
	target_compile_options(${PROJECT_NAME} PRIVATE -w)
endif()
