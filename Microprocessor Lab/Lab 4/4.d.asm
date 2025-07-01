mvi a,80h
out 43h
mvi a,01h
mvi b,0ffh
out 40h
inr a
dcr b
jnz 4208h
hlt