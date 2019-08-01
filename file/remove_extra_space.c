#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *p;
	int cnt=0,i,j,l,cnt2=0;
	char ch,temp,*buf,*ptr;
	p=fopen(argv[1],"r");
	while((ch=fgetc(p))!=EOF)
		cnt++;
	fclose(p);
	buf=calloc(1,cnt+1);
	p=fopen(argv[1],"r");
	for(i=0;i<cnt;i++)
		buf[i]=fgetc(p);
	fclose(p);

printf(">>>%d<<<<",strlen(buf));
	///////////////////////////////////////////////////////////////
	for(i=0;buf[i];i++)
	{
		if((buf[i]==' ')&& ((buf[i+1])==' '))
		{
			cnt2++;
		strcpy(buf+i,buf+i+1);
		i--;	

		}
	}
buf=realloc(buf,cnt-(cnt2));
printf(">>>%d<<<<",strlen(buf));
	/////////////////////////////////////////////////////////////
	p=fopen(argv[1],"w");
	i=0;
	while(buf[i]!='\0')
	{
		fputc(buf[i],p);
		i++;
	}
	fclose(p);

}
