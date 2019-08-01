	outpin bit p1.0
	inpin bit p1.1
	temp bit 20h.0
	cseg at 0
main:
	jb inpin,$
	clr outpin
	jnb inpin,$
	setb outpin
	sjmp main
end
	
	
