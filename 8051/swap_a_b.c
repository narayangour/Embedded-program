//#include<intrins.h>
sfr acc=0xe0;
sfr b=0xf0;
main()
{
unsigned char t;
acc=0x34;
b=0x56;
t=acc;
acc=b;
b=t;
}

