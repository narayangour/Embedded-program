$INCLUDE(delay100.ASM)
led bit p2.4
	cseg at 0
main:

setb led 
acall DELAY100MS
acall DELAY100MS	
clr led
acall DELAY100MS
acall DELAY100MS	
SJMP main
	
end
	
	