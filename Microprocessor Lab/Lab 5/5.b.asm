 MVI B, 00h
 MVI C, 3Ch
 MVI D, 2Ah
 MVI E, 09h
 MOV A, C 
 RAR 
 MOV C, A 
 DCR E 
 JZ 4219h 
 MOV A, B 
JNC 4214h 
 ADD D 
 RAR 
 MOV B, A 
 JMP 4208h 
 MOV A, B 
 OUT 41h 
 MOV A, C 
 OUT 42h 
hlt