mvi a,3ch
out 0ah
in 0ah
call delay
out 0ah
hlt

delay: mvi b,00h
loop1: mvi c,00h
loop2: dcr c
jnz loop2
dcr b
jnz loop1
rar
ret