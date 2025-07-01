;lab1.4
lxi b, 4455h
lxi d, 6677h

;swap b and d
mov h, b
mov b, d
mov d, h
;swap c and e
mov h, c
mov c, e
mov e, h

hlt