#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
	if(strstr(buf,argv[2]))
	printf("found\n");
	else	
	printf("not found\n");

}
