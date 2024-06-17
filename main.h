/*
QMMVM - VM Wrapper Tool
Copyright 2004-2024
https://github.com/thecybermind/qmm/
3-clause BSD license: https://opensource.org/license/bsd-3-clause

Created By:
    Kevin Masterson < cybermind@gmail.com >

*/

#ifndef __MAIN_H__
#define __MAIN_H__

#ifdef WIN32
 #define DLLEXPORT __declspec(dllexport)
 #ifdef linux
  #undef linux
 #endif
#else
 #define DLLEXPORT /* */
#endif
#define C_DLLEXPORT extern "C" DLLEXPORT

typedef int (QDECL *syscall_t)(int, ...);

typedef int (*pfn_t)(int, int, int, int, int, int, int, int, int, int, int, int);

extern syscall_t g_syscall;
extern vm_t g_VM;
extern FILE* g_df;

extern char qmmvm_vmpath[MAX_QPATH], qmmvm_vmbase[16];
extern int qmmvm_debug, qmmvm_stacksize;

C_DLLEXPORT int vmMain(int cmd, int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11);
C_DLLEXPORT void dllEntry(syscall_t psyscall);
int QDECL VM_SysCalls(byte *memoryBase, int cmd, int *args);

#endif
