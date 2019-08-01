#include<reg51.h>
#include"delays.h"
#include"i2c.h"
#include"lcd.h"
unsigned char buff;// _at_ 0x30;
main()
{
	unsigned char i,j;
	init_lcd();
	//putc_lcd('c');
//	putc_lcd('b');
	while(1)
	{
	for(j=0;j<16;j++)
	{
		for(i=0;i<=2;i++)
		{
		i2c_device_write(0xa0,0x00,'a'+i);
		buff=i2c_device_read(0xa0,0x00);	
		cmd_lcd(0x80+i);
		putc_lcd(buff);
		delay_ms(100);
		}
		
		
		
//cmd_lcd(0x01);
	}
	
/*	while(1)
{
	cmd_lcd(0x80);
	putc_lcd(buff/16+48);
	putc_lcd(buff%16+48);
}*/
	//putc_lcd(buff);
}
}
