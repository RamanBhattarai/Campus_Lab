	 lxi h, 9025h
	 mvi m, 0ffh

	 mov a, m
	 ani 20h
	 rlc
	 rlc
	 rlc
	 jc display
	 mvi a, 00h
	 out 0ah
	 jmp exit 
display: mvi a, 01h
	 out 0ah
exit:	 hlt


