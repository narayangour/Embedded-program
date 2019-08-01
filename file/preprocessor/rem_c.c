#include<stdio.h>
#include<string.h>
#include<stdlib.h>
rem_c(char *p)///*p=buff
{
	int i,j;
	i=0;
	while(p[i])
	{
		if((p[i]=='/')&&(p[i+1]=='/'))
			for(j=i;p[j]!=10;j++)
				p[j]=' ';
		i++;

	}
	////////now job is remove to multiline comment/////////

	i=0;
	while(p[i])
	{
		if((p[i]=='/')&& (p[i+1]=='*'))
		{
			while(!((p[i]=='*')&&(p[i+1]=='/')))
			{
				p[i]=' ';
				i++;
			}
			p[i]=' ';	
			p[i+1]=' ';
		}
		i++;/**/
	}
}
