string segment code
rseg string 
str: db 53,94,56,92,74,65,43,23,83
cseg at 0

	mov r0,#09h;for counting purposes
	mov dptr,#str
	clr a;a=0
	movc a,@a+dptr;a=53
	mov r1,a;b=53 as a max initialize
	mov b,a

	clr c
	jc again
	
l1:	mov a,r2
	mov r3,a
	mov b,r3	

again:
	inc dptr;dptr point to 94
	clr a;a=0
	movc a,@a+dptr;a=94
	mov r2,a
	div ab

	jnz l1
	mov a,r2
	mov r3,a
	mov b,r3

	dec r0
	cjne r0,#00h,again
	
end