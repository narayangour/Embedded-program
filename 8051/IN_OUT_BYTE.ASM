OUTPORT EQU P1
INPORT EQU P2
CSEG AT 0
MAIN:
	MOV A,#0FFH	
	CJNE A,P2,$
	MOV OUTPORT,#55H
	MOV A,#OFEH
	CJNE A,P2,$
		
	MOV OUTPORT,#OAAH
	SJMP MAIN
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    	SJMP $	
	
ENDMAIN:
END
