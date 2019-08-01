#ifndef i2c_h
#define i2c_h

extern void i2c_start();
extern void i2c_byte_write(unsigned char dat);
extern void i2c_ack();
extern void i2c_stop();
extern void i2c_noack();
extern void i2c_device_write(unsigned char sa,unsigned char addr,unsigned char dat);
extern unsigned char i2c_byte_read(unsigned char sa,unsigned char addr);
extern unsigned char i2c_device_read(unsigned char sa,unsigned char addr);

#endif
