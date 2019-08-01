void dispi_2_mux_segs(unsigned char n,int t)
{
	if(t==0)
	{
		seg=seg_lut[n/10];
		sel3=0;	
		delay_ms(1);
		sel3=1;	
	
		seg=seg_lut[n%10];
		sel4=0;
		delay_ms(1);
		sel4=1;			

	}	
	else
	{
	seg=seg_lut[n/10];
	sel1=0;
	delay_ms(1);
	sel1=0;
		
	seg=seg_lut[n%10];
	sel2=0;
	delay_ms(1);
	sel2=1;
	}

}
