QMMVM - VM Wrapper Tool
Copyright 2004-2024
https://github.com/thecybermind/qmmvm/
3-clause BSD license: https://opensource.org/license/bsd-3-clause

Created By:
    Kevin Masterson < cybermind@gmail.com >


Each game uses a different filename for the mod DLL/SO. Refer to this list when asked to rename QMM.VM
	Quake 3 Arena: qagamex86.dll / qagamei386.so
	Return to Castle Wolfenstein: qagame_mp_x86.dll / qagame_mp_i386.so
	Jedi Knight 2: jk2mpgamex86.dll / jk2mpgamei386.so

Win32 Installation:
	1. Place the qmmvm.dll file in your mod directory (i.e. baseq3)
	2. Rename qmmvm.dll to <mod filename> (see above)
	3. Set vm_game to 0
	4. Run your server, optionally with one of the cvars listed below

Linux Installation:
	1. Place the qmmvmi386.so file in your mod directory (i.e. baseq3)
	2. Rename qmmvmi386.so to <mod filename> (see above)
	3. Set vm_game to 0
	4. Run your server, optionally with one of the cvars listed below
	
Cvars:
	qmmvm_vmpath	-	sets the path to look for the VM (default="vm/qagame.qvm",jk2 default="vm/jk2mpgame.qvm")
	qmmvm_debug	-	sets whether or not to output function calls to a logfile (default=0, log opcodes=2)
	qmmvm_stacksize -	sets the size of the VM stack in MB (i.e. "1"=1MB) (default="1")
	
	qmmvm_version	-	the current QMMVM version (readonly)
	qmmvm_vmbase	-	the memory offset for the VM (readonly, used by QMM plugins)
	
Server commands:
	qmmvm_status	-	outputs version, loaded VM path, and debug logging status


For mod developers (Quake 3 Arena and Jedi Knight 2: Jedi Outcast only):
	Note, this feature is __BETA__. It has been tested on Win32, but not Linux.
	
	QMMVM provides 3 extra standard C functions to mods compiled as VMs:
		void* malloc(size_t size);
		void* realloc(void* src, size_t size);
		void free(void* src);
	
	To use them:
		1. Replace the g_syscalls.asm file with the other/g_syscalls.asm file (in this archive)
		   Use other/g_syscalls_jk2.asm for Jedi Knight 2: Jedi Outcast (remove "_jk2")
		2. Include the other/qmmvh.h file (in this archive) in q_shared.h near bg_lib.h
