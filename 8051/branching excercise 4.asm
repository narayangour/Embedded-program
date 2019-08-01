cseg at 0

	mov r5,#00h
	mov r0,#10h
	mov r1,#30h
l1:
	mov a,@r0
	mov @r1,a
	inc r0
	inc r1
	inc r5
	cjne r5,#11h,l1
	sjmp next
next:
end   
