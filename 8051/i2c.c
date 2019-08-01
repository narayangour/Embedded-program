#include<reg51.h>
#include"delays.h"
sbit sda=P3^1;
sbit scl=P3^0;
void i2c_start()
{
	//scl=0;
	sda=1;//init
	scl=1;//bus
	sda=0;//and issue start condition

}
void i2c_byte_write(unsigned char dat)
{
		unsigned char i;
		for(i=0;i<8;i++)
		{
		scl=0;
		sda=((dat&(0x80>>i))?1:0);
		scl=1;
		}	


}
void i2c_ack()
{
	scl=0;
	sda=1;
	scl=1;
	while(sda==1);
}
void i2c_stop()
{
	scl=0;
	sda=0;//init
	scl=1;//bus
	sda=1;//and issue start condition

}
void i2c_noack()
{
	scl=0;
	sda=1;
	scl=1;
}
void i2c_device_write(unsigned char sa,unsigned char addr,unsigned char dat)
{
	i2c_start();
	i2c_byte_write(sa);
	i2c_ack();
	i2c_byte_write(addr);
	i2c_ack();
	i2c_byte_write(dat);
	i2c_ack();	
	i2c_stop();
	delay_ms(10);

}
unsigned char i2c_byte_read()
{
unsigned char i,buff=0;
	for(i=0;i<8;i++)
	{
	scl=0;
	
	if(sda)
	buff|=(0x80>>i);
	scl=1;	
	}
	return buff;	
}
unsigned char i2c_device_read(unsigned char sa,unsigned char addr)
{
	unsigned char buff=0;
	i2c_start();
	i2c_byte_write(sa);
	i2c_ack();
	i2c_byte_write(addr);
	i2c_ack();
	scl=0;
	i2c_start();
	i2c_byte_write(sa|1);
	i2c_ack();
	buff=i2c_byte_read();
	i2c_noack();
	i2c_stop();
	
	return buff;
}









