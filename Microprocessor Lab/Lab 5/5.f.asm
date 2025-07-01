MVI A,01h 
 OUT 40h 
 INR A 
 CALL delay 
JMP 4202h
hlt

delay: MVI B,80h 
loop2: MVI C,80h 
loop1: DCR C 
JNZ loop1 
DCR B 
JNZ loop2 
RET