#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch,*buf;
	int cnt=0,j,i;
//	fp=fopen(argv[1],"r");
//	while(ch=fgetc(fp)!=EOF)
//	cnt++;
//	fclose(fp);
	fp=fopen(argv[1],"r");
	for(i=0;i<cnt;i++)
	buf[i]=fgetc(fp);
	fclose(fp);
//	printf("%d",strlen(buf));	

//	for(i=0;buf[i];i++)
//	{
		i=0;
                while((buf[i]!='/')&&(buf[i+1]!='*'))
		{
			fputc(buf[i],fp);
			i++;
		}
                while((buf[i]));
	
}

