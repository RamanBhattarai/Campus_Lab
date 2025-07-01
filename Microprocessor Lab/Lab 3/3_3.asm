;given
lxi h, 9024h
mvi m, 0a2h
inr l
mvi m, 79h
	
lda 9024h
ora m
sta 9026h
hlt
