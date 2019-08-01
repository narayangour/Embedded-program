sw1 bit p2.0 
sw2 bit p2.1 
sw3 bit p2.2 
sw4 bit p2.3 
sw5 bit p2.4 
sw6 bit p2.5 
sw7 bit p2.6 
sw8 bit p2.7 

led1 bit p3.0
led2 bit p3.1
led3 bit p3.2
led4 bit p3.3
led5 bit p3.4
led6 bit p3.5
led7 bit p3.6
led8 bit p3.7

cseg at 0
;mov p2,#00fh

main:

jnb sw1,l1
setb led1
sjmp next1
l1:
	clr led1
next1:

jnb sw2,l2
setb led2
sjmp next2
l2:
	clr led2
next2:

jnb sw3,l3
setb led3
sjmp next3
l3:
	clr led3
next3:

jnb sw4,l4
setb led4
sjmp next4
l4:
	clr led4
next4:

jnb sw5,l5
setb led5
sjmp next5
l5:
	clr led5
next5:

jnb sw6,l6
setb led6
sjmp next6
l6:
	clr led6
next6:

jnb sw7,l7
setb led7
sjmp next7
l7:
	clr led7
next7:

jnb sw8,l8
setb led8
sjmp next8
l8:
	clr led8
next8:


sjmp main
end
