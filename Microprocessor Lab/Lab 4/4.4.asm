mvi a,00h
mvi c,32h
call multiply
mov d,a
mov a,b
rar
out 0ah
mov a,d
rar
out 0bh
hlt

multiply: mov d,c
inr c
loop: add c
cc carry
dcr d
jnz loop
ret

carry: inr b
ret