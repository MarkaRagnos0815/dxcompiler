/*===------- llvm/Config/llvm-config.h - llvm configuration -------*- C -*-===*/
/*                                                                            */
/*                     The LLVM Compiler Infrastructure                       */
/*                                                                            */
/* This file is distributed under the University of Illinois Open Source      */
/* License. See LICENSE.TXT for details.                                      */
/*                                                                            */
/*===----------------------------------------------------------------------===*/

/* This file enumerates variables from the LLVM configuration so that they
   can be in exported headers and won't override package specific directives.
   This is a C header that can be included in the llvm-c headers. */

#ifndef LLVM_CONFIG_H
#define LLVM_CONFIG_H

/* Installation directory for binary executables */
/* #undef LLVM_BINDIR */

/* Time at which LLVM was configured */
/* #undef LLVM_CONFIGTIME */

/* Installation directory for data files */
/* #undef LLVM_DATADIR */

/* Target triple LLVM will generate code for by default */
#define LLVM_DEFAULT_TARGET_TRIPLE "dxil-ms-dx"

/* Installation directory for documentation */
/* #undef LLVM_DOCSDIR */

/* Define if threads enabled */
#define LLVM_ENABLE_THREADS 1

/* Installation directory for config files */
/* #undef LLVM_ETCDIR */

/* Has gcc/MSVC atomic intrinsics */
#define LLVM_HAS_ATOMICS 1

/* Host triple LLVM will be executed on */
#define LLVM_HOST_TRIPLE "x86_64-pc-win32"

/* Installation directory for include files */
/* #undef LLVM_INCLUDEDIR */

/* Installation directory for .info files */
/* #undef LLVM_INFODIR */

/* Installation directory for man pages */
/* #undef LLVM_MANDIR */

/* LLVM architecture name for the native architecture, if available */
#define LLVM_NATIVE_ARCH X86

/* LLVM name for the native AsmParser init function, if available */
/* #undef LLVM_NATIVE_ASMPARSER */

/* LLVM name for the native AsmPrinter init function, if available */
/* #undef LLVM_NATIVE_ASMPRINTER */

/* LLVM name for the native Disassembler init function, if available */
/* #undef LLVM_NATIVE_DISASSEMBLER */

/* LLVM name for the native Target init function, if available */
/* #undef LLVM_NATIVE_TARGET */

/* LLVM name for the native TargetInfo init function, if available */
/* #undef LLVM_NATIVE_TARGETINFO */

/* LLVM name for the native target MC init function, if available */
/* #undef LLVM_NATIVE_TARGETMC */

/* Define if this is Win32ish platform */
#if defined(WIN32)
#define LLVM_ON_WIN32 1
#else
#define LLVM_ON_UNIX 1
#endif

/* Installation prefix directory */
#define LLVM_PREFIX "C:/Program Files (x86)/LLVM"

/* Define if we have the Intel JIT API runtime support library */
/* #undef LLVM_USE_INTEL_JITEVENTS */

/* Define if we have the oprofile JIT-support library */
/* #undef LLVM_USE_OPROFILE */

/* Major version of the LLVM API */
#define LLVM_VERSION_MAJOR 3

/* Minor version of the LLVM API */
#define LLVM_VERSION_MINOR 7

/* Patch version of the LLVM API */
#define LLVM_VERSION_PATCH 0

/* LLVM version string */
#define LLVM_VERSION_STRING "3.7-v1.8.2405-326-g11e28952e-dirty"

/* Define if we link Polly to the tools */
/* #undef LINK_POLLY_INTO_TOOLS */

#endif
