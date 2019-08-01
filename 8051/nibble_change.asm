CSEG AT 0
mov r5,#57h
mov r6,#12h
anl 05h,#0fh
mov a,r6
cpl a
anl a,#0fh
swap a
orl 05h,a

end
