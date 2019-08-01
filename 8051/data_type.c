//at compiller allocated location 
code char s[]="welcome to vector";
data char d1[18];
xdata char d2[18];
main()
		{
			unsigned char i;
			for(i=0;s[i];i++)
			{
				d2[i]=d1[i]=s[i];
			}
		while(1);
		}
