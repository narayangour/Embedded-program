#include<reg51.h>

#define leds P2
#define init_leds() leds=0xf0


void disp_bin_num_leds(unsigned char n)
{
leds=0xf0;
leds^=n;
}
