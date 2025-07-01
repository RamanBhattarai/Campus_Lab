mvi a,0ffh
mvi b,08h
lxi h,8080h
loop: rrc
jnc next
inr m
next: dcr b
jnz loop

hlt