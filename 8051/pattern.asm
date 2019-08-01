$INCLUDE(delay100.ASM)
leds equ p2

cseg at 0
main:

mov r2,#0
again:

mov a,r2
xrl a,#0f0h
mov leds,a
acall DELAY100MS
acall DELAY100MS
acall DELAY100MS
acall DELAY100MS
inc r2
SJMP again
end
