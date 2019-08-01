OUTPORT EQU P1
INPORT EQU P2
CSEG AT 0
MAIN:
	MOV A,#0FFH
	CJNE A,P2,$

L2:
	MOV A,INPORT	
	MOV OUTPORT,A
	MOV OUTPORT,INPORT
	DJNZ R0,L2
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    	SJMP $	
	SJMP MAIN
ENDMAIN:
END