#pragma once

uint8_t instr_size[0x100] = 
{ 
	1, // NOP
	2, // AJMP
	3, // LJMP
	1, // RR
	1, // INC ACC
	2, // INC IRAM ADDR
	1, // INC @R0
	1, // INC @R1
	1, // INC R0
	1, // INC R1
	1, // INC R2
	1, // INC R3
	1, // INC R4
	1, // INC R5
	1, // INC R6
	1, // INC R7
	3, // JBC
};