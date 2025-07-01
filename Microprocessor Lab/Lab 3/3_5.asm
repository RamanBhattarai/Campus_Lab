;given
lxi h, 9025h
mvi m, 79h

;complement
lda 9025h
xri 40h
sta 9025h

hlt