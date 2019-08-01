#include<reg51.h>
#include"delays.h"
#include"lcd.h"
#include"mcp3204.h"

main()
{
	
	init_lcd();
	while(1)
	{
		cmd_lcd(0x80);
		putf_lcd(read_adc_mcp3204(0));	

cmd_lcd(0x88);
		putf_lcd(read_adc_mcp3204(1));

cmd_lcd(0xc0);
		putf_lcd(read_adc_mcp3204(2));

cmd_lcd(0xc8);
		putf_lcd(read_adc_mcp3204(3));	

	}		
}
