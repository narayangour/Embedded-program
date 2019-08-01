CSEG AT 0
MOV TMOD ,#20H
MOV SCON,#50H
MOV TH1,#-3
SETB TR1

MOV R0,#60H

label:	CLR RI

RPT: 	JNB RI,RPT
	mov a,sbuf 
	;MOV P0,A
	mov @r0,a
	inc r0
	cjne a,#0Dh,label

END
