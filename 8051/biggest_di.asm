string segment code
rseg string 
str: db 53,94,56,92,74,65,43,23,83
cseg at 0

	mov r0,#09h;for counting purposes
	mov dptr,#str
		
	clr a;a=0
	movc a,@a+dptr;a=53
	mov b,a
	mov 30h,a;b=53 as a max initialize

	

again:
	inc dptr;dptr point to 94
	clr a;a=0
	movc a,@a+dptr;a=94
	mov r2,a
	div ab

	jz l1
	mov 30h,r2	
l1:	mov b,30h
	mov a,dpl
	cjne a,#str+9,again
end