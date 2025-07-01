MVI C, 00h 
 MVI B, 0Ah 
 MVI D, 03h 
 MOV A, B 
 SUB D 
 JC 4210h 
 MOV B, A 
 INR C
JMP 4206h 
 MOV E, B 
 MOV A, C 
 OUT 40h 
 MOV A, E 
 OUT 41h
hlt