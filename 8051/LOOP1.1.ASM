string segment code
rseg string 
str: db 'welcome to vector'
cseg at 0
mov dptr,#str
mov r0,#30h
mov r7,#10h
mov r6,#00h


again:
clr a
movc a,@a+dptr
mov @r0,a
push dpl
push dph
mov dpl,r6
mov dph,r7
movx @dptr,a
pop dph
pop dpl
inc dptr
inc r0
inc r6
mov a,dpl
cjne a,#str+17,again
end

