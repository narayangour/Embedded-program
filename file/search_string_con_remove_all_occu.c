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
	printf(">>%d<<",strlen(buf));
	///////////////////////////////////////////////////////////////
	while((ptr=strstr(buf,argv[2])))
	{	cnt2++;
		l=strlen(argv[2]);
		strcpy(ptr,ptr+l);
	}
	buf=realloc(buf,cnt-(cnt2*l));	
	printf(">>%d<<",strlen(buf));
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
