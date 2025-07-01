mvi a,00h
lxi h,4205h
out 40h
cpi 0ffh
jz exit
inr a
pchl
exit: hlt