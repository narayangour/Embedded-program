//at user specified location
code char s[]="welcome to vector";
data char d1[18] _at_ 0x30;
xdata char d2[18] _at_ 0x1000;
main()
		{
			unsigned char i;
			for(i=0;s[i];i++)
			{
				d2[i]=d1[i]=s[i];
			}
		while(1);
		}