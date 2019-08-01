CSEG AT 0

MAIN:
ACALL DELAY10MS
SJMP $

DELAY10MS:
		mov r6,#9
l1:
		acall delay1ms
		djnz r6,l1
delay1ms:
		MOV R7,#255
		DJNZ R7,$
		MOV R7,#242
		DJNZ R7,$
		RET
END