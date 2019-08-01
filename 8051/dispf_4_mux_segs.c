
void dispf_4_mux_segs(float f)
{
	int t;
	if(f>0.0 && f<10.0)
	{
		t=f*1000;dp1=0x7f;
	}	

	else if(f>10.0 && f<100.0)
	{
		t=f*100;dp2=0x7f;
	}
	else if(f>100.0 && f<1000.0)
	{
		t=f*10;	dp3=0x7f;
	}
	dispi_4_mux_segs(t);
}
