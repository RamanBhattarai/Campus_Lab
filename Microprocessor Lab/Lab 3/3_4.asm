;given
lxi h, 9027h
mvi m, 4bh
inr l
mvi m, 0c4h

;xor
lda 9027h
xra m
sta 9029h
hlt