#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *p;
	int cnt=0,i;
	char ch, *buf;
	p=fopen(argv[1],"r");
	while((ch=fgetc(p))!=EOF)
		cnt++;
	fclose(p);
	buf=calloc(1,cnt+1);
	p=fopen(argv[1],"r");
	for(i=0;i<cnt;i++)
		buf[i]=fgetc(p);
	fclose(p);


	p=fopen(argv[2],"w");
	for(i=0;i<cnt;i++)
		fputc(buf[i],p);
	fclose(p);

}
