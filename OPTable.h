#include <stdio.h>
#include <stdbool.h>

bool SearchInOPTable(char op[])
{
	return true;
}

struct OPTable {
	char mnemonic[10];
	char format[4];
	int opcode;	
};

struct OPTable op[]={{"ADD","3/4",0x18},{"ADDF","3/4",0x58},{"ADDR","2",0x90},
					{"AND","3/4",0x40},{"CLEAR","2",0xB4},{"COMP","3/4",0x28},
					{"COMPF","3/4",0x88},{"COMPR","2",0xA0},{"DIV","3/4",0x24},
					{"DIVF","3/4",0x64},{"DIVR","2",0x9C},{"FIX","1",0xC4},
					{"FLOAT","1",0xC0},{"HIO","1",0xF4},{"J","3/4",0x3C},
					{"JEQ","3/4",0x30},{"JGT","3/4",0x34},{"JLT","3/4",0x38},
					{"JSUB","3/4",0x48},{"LDA","3/4",0x00},{"LDB","3/4",0x68},
					{"LDCH","3/4",0x50},{"LDF","3/4",0x70},{"LDL","3/4",0x08},
					{"LDS","3/4",0x6C},{"LDT","3/4",0x74},{"LDX","3/4",0x04},
					{"LPS","3/4",0xD0},{"MUL","3/4",0x20},{"MULF","3/4",0x60},
					{"MULR","2",0x98},{"NORM","1",0xC8},{"OR","3/4",0x44},
					{"RD","3/4",0xD8},{"RMO","2",0xAC},{"RSUB","3/4",0x4C},
					{"SHIFTL","2",0xA4},{"SHIFTR","2",0xA8},{"SIO","1",0xF0},
					{"SSK","3/4",0xEC},{"STA","3/4",0x0C},{"STB","3/4",0x78},
					{"STCH","3/4",0x54},{"STF","3/4",0x80},{"STI","3/4",0xD4},
					{"STL","3/4",0x14},{"STS","3/4",0x7C},{"STSW","3/4",0xE8},
					{"STT","3/4",0x84},{"STX","3/4",0x10},{"SUB","3/4",0x1C},
					{"SUBF","3/4",0x5C},{"SUBR","2",0x94},{"SVC","2",0xB0},
					{"TD","3/4",0xE0},{"TIO","1",0xF8},{"TIX","3/4",0x2C},
					{"TIXR","2",0xB8},{"WD","3/4",0xDC}};
