push psw
pop b
mov a,c
ani 0f1h
mov c,a
push b
pop psw
hlt