cmake_minimum_required(VERSION 3.21)

# Project name and a few useful settings. Other commands can pick up the results
project(dxcompiler_llvm VERSION 1.0 DESCRIPTION "DXC Compiler Project")

include(${CMAKE_CURRENT_LIST_DIR}/../../cmake/build.cmake)

add_subdirectory(Analysis)
add_subdirectory(AsmParser)
add_subdirectory(Bitcode)
add_subdirectory(DxcBindingTable)
add_subdirectory(DxcSupport)
add_subdirectory(DXIL)
add_subdirectory(DxilCompression)
add_subdirectory(DxilContainer)
add_subdirectory(DxilDia)
add_subdirectory(DxilHash)
add_subdirectory(DxilPdbInfo)
add_subdirectory(DxilPIXPasses)
add_subdirectory(DxilRootSignature)
add_subdirectory(DxilValidation)
add_subdirectory(DxrFallback)
add_subdirectory(HLSL)
add_subdirectory(IR)
add_subdirectory(IRReader)
add_subdirectory(Linker)
add_subdirectory(LTO)
add_subdirectory(MSSupport)
add_subdirectory(Option)
add_subdirectory(PassPrinters)
add_subdirectory(ProfileData)
add_subdirectory(Support)
add_subdirectory(TableGen)
add_subdirectory(Target)
add_subdirectory(Transforms/InstCombine)
add_subdirectory(Transforms/IPO)
add_subdirectory(Transforms/Scalar)
add_subdirectory(Transforms/Utils)
add_subdirectory(Transforms/Vectorize)

