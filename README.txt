Pass 1(define symbols):
1. Assign addresses(Loc) to all statements in program.
2. Save the values(addresses) assigned to all labels for use in Pass 2.
3. Perform some processing of assembler directives.(This includes the length of data areas defined by BYTE,RESW,etc.)

Pass 2(assemble instructions and generate object program):
1. Assemble instructions(translating operation codes and looking up addresses).
2. Generate data values defined by BYTE,WORD,etc.
3. Perform processing of assembler directives not done during Pass 1.
4. Write the object program and assembly listing.
