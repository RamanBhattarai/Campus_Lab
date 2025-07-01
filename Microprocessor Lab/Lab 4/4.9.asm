mvi b,0fh
mov a,b
rar
jc exit
mov a,b
out 0ah
exit: hlt