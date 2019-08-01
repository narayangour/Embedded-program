#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *p;
	int cnt=0,i,j,l;
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
	while((ptr=strstr(buf,argv[2])))
	{
		l=strlen(argv[2]);
		memset(ptr,'*',l);////by memset method////
////////by assignment method./////////////
//		for(i=0;i<l;i++)
//		{
//			ptr[i]='*';
//		}
	}
	p=fopen(argv[1],"w");
	i=0;
	while(buf[i]!='\0')
	{
		fputc(buf[i],p);
		i++;
	}
	fclose(p);

}
