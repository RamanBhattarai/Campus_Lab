lxi h,7963h
shld 8090h
lxi h,2697h
shld 8092h
lhld 8092h
mov b,h
mov c,l
lhld 8090h
mov a,l
sub c
sta 8094h
mov a,h
sbb b
sta 8095h
hlt