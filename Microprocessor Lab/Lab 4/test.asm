mvi a,3ch
lxi b,0ffh
loop: mvi c,0ffh
loop1: mvi d,0ffh
loop2: dcr d
jnz loop2
dcr c
jnz loop1
dcr b
jnz loop
rar
out 0ah
hlt