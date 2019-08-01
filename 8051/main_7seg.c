#include"keypad.h"
#include"seg.h"
#include"reg51.h"
main()
{

unsigned char key,k=0;
init_rows();
while(colscan())
{
	disp2i_bin_num_leds(key);
}     
}
