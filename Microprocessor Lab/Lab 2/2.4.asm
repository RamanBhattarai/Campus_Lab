lxi h,79a2h
shld 8084h
lxi h,0c44bh
shld 8086h
lhld 8084h
mov b,h
mov c,l
lhld 8086h
dad b
mvi a,00h
ral
shld 8088h
sta 808ah
lhld 8086h
mov a,l
add c
mov c,a
mov a,h
adc b
mov b,a
hlt