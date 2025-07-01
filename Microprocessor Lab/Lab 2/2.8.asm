lxi h,7913h
shld 8284h
lxi h,4826h
shld 8286h
lhld 8284h
mov b,h
mov c,l
lhld 8286h
mov a,l
add c
daa
mov l,a
mov a,h
adc b
daa
mov h,a
mvi a,00h
ral
shld 8288h
sta 828ah
hlt