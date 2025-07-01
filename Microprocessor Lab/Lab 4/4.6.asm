mvi a,128
sta 8020h
lda 8020h
cpi 128
jc exit
sta 8030h
exit: hlt