lxi h, 9030h
mvi m, 0efh

mov a, m
ani 10h
;zero flag set->D4 is zero.
;zero flag reset->D4 is not zero
hlt