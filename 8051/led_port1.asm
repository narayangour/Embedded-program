LED BIT P1.4
$INCLUDE(delay100.asm)
cseg at 0
main:
	clr led
 	acall DELAY100MS
	acall DELAY100MS
	setb led
	acall DELAY100MS
	acall DELAY100MS
	sjmp main
end