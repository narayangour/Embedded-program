CSEG AT 0
mov 31h,#15h
mov 32h,#23h
mov a,31h
addc a,32h
mov r0,a
clr a
addc a,#00h

swap a
mov 40h,a
end