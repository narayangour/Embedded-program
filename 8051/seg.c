#include"delays.h"
#include"reg51.h"

sbit sel1=P2^3;
sbit sel2=P2^2;
sbit sel3=P2^1;
sbit sel4=P2^0;

sbit seg_dp=P0^7;
sbit seg_g=P0^6;
sbit seg_f=P0^5;
sbit seg_e=P0^4;
sbit seg_d=P0^3;
sbit seg_c=P0^2;
sbit seg_b=P0^1;
sbit seg_a=P0^0;

code unsigned char seg_lut[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
unsigned char dp1=0xff,dp2=0xff,dp3=0xff,dp4=0xff;
//dp1=0xff;dp2=0xff;dp3=0xff;dp4=0xff;

bit dp;
void t (unsigned char n)
{
unsigned char s=seg_lut[n];
seg_dp =dp;
seg_g = (s&0x40)?1:0;
seg_f = (s&0x20)?1:0;
seg_e = (s&0x10)?1:0;
seg_d = (s&0x08)?1:0;
seg_c = (s&0x04)?1:0;
seg_b = (s&0x02)?1:0;
seg_a = (s&0x01)?1:0;
}