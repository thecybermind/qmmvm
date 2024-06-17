/*
QMMVM - VM Wrapper Tool
Copyright 2004-2024
https://github.com/thecybermind/qmm/
3-clause BSD license: https://opensource.org/license/bsd-3-clause

Created By:
    Kevin Masterson < cybermind@gmail.com >

*/

#ifndef __UTIL_H__
#define __UTIL_H__

int byteswap(int i);
short byteswap(short s);
char* vaf(char* fmt, ...);
const char* opcodename(int op);
int opparms(int op);
const char* modfuncname(int cmd);
const char* engfuncname(int cmd);

#endif //__UTIL_H__
