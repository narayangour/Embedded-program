cseg at 0
mov r5,#0ech 
mov r1,#00h //for making nibble zero  r1=00
mov a,r5	//moving ec mdata into a=0ech 
xchd a,@r1	//a=0e0h
swap a		//a=00eh
add a,#06h	//a=014h
swap a		//
mov r2,a	//r2=0x14h
mov a,r5	//a=0ech
swap a		//a=0ceh
mov 00h,#00h
mov r1,#00h	//r1=0x00h
xchd a,@r1	//a=0xc0h
swap a		//a=0x0ch
addc a,#06h	//a=0x12h

add a,r2
mov r6,a
end
