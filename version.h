/*
QMMVM - VM Wrapper Tool
Copyright 2004-2024
https://github.com/thecybermind/qmmvm/
3-clause BSD license: https://opensource.org/license/bsd-3-clause

Created By:
    Kevin Masterson < cybermind@gmail.com >

*/

#ifndef __VERSION_H__
#define __VERSION_H__

#define QMMVM_VERSION		"0.4.0b"
#define QMMVM_VERSION_DWORD	0,4,0,0
#define QMMVM_COMPILE		__TIME__ " " __DATE__
#define QMMVM_BUILDER		"CyberMind"

//#define GAME_Q3A
//#define GAME_JK2

//set default mod dir
#if defined(GAME_JK2)
 #define QMMVM_DEFAULT_MODDIR	"base"
 #define QMMVM_DEFAULT_VMPATH	"vm/jk2mpgame.qvm"
 #define QMMVM_GAME		"JK2"
 #undef GAME_Q3A
#elif defined(GAME_Q3A)
 #define QMMVM_DEFAULT_MODDIR	"baseq3"
 #define QMMVM_DEFAULT_VMPATH	"vm/qagame.qvm"
 #define QMMVM_GAME		"Q3A"
 #define G_MEMSET		100
 #define G_MEMCPY		101
 #define G_STRNCPY		102
 #define G_SIN			103
 #define G_COS			104
 #define G_ATAN2		105
 #define G_SQRT			106
 #define G_FLOOR		110
 #define G_CEIL			111
 #define G_TESTPRINTINT		112
 #define G_TESTPRINTFLOAT	113
#else
 #ifndef MSVC_RC
  #error You must define a GAME_ value in version.h or on compiler command line
 #endif
#endif

#define QMMVM_G_MALLOC		1000
#define QMMVM_G_REALLOC		1001
#define QMMVM_G_FREE		1002

#ifdef WIN32
 #define QMMVM_OS		"Win32"
#else
 #define QMMVM_OS		"Linux"
#endif

#define PARAM_OPCODE 2
#define DEBUG_OPCODE 3

#endif //__VERSION_H__
