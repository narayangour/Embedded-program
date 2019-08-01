DELAY SEGMENT CODE
RSEG DELAY 

DELAY100MS:
		MOV R5,#9
L2:
		ACALL DELAY10MS
		DJNZ R5,L2

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
