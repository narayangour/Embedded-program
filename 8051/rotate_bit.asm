CSEG AT 0

mov r0,#15h
mov r1,#23h
mov a,r0
rlc a
mov r0,a
mov a,r1
rlc a
mov r1,a
mov a,r0
mov acc.0,c
mov r0,a

end