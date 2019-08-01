#include"reg51.h"
#include"seg.h"
void dispf_4_mux_segs(float );
main()
{
	//dp3=0x7f;
//sel1=0,sel2=0,sel3=0,sel4=0;
	while(1)
	{
	dispf_4_mux_segs(25.0);
	}
}