#include<reg51.h>
#include"keypad.h"
#include"led.h"
//#include<seg.h>
void disp_bin_num_leds(unsigned char);
main()
{
	unsigned char key;
	init_leds();
	while(1)
		{
		key=keyscan();
		disp_bin_num_leds(key);
		while(!colscan());
		}

}
