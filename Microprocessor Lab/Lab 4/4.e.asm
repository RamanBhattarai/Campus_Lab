mvi a,80h
out 43h
mvi a,0fh
lxi h,8080h
pchl
hlt

8080: dcr a
	out 42h
	jmp 8080