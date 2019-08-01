CSEG AT 0h

mov 17h,#0xff
mov a,17h
add a,#0xff
mov 32h,a
mov 18h,#0xff
mov a,18h
addc a,#00h
mov 31h,a
clr a
addc a,#0h
mov 30h,a

end