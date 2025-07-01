MVI B, 00h 
 MVI C, 45h 
 MOV A, B 
 INR A
MOV B, A 
 MOV A, C 
 DCR A 
 MOV C, A
hlt