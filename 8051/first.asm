CSEG AT 0h

mov 31h,#0ffh
mov 32h,#0ffh

mov a,31h
add a,32h
mov r0,a
clr a
addc a,#00h

add a,r0
swap a
mov 40h,a
end