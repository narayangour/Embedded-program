void disp2i_4_mux_segs(unsigned int n)
{

unsigned char nod=0,i;
unsigned char t=n;
	while(t)
	{
		nod++;
		t=t/10;
	}
		i=nod;
	while(n)
	{
		seg=seg_lut[n%10];
		p2=p2 & (~(1<<(nod-i)));
	delay_ms(1);
	p2=oxff;
	n=n/10;
	i--;
	 }

}
