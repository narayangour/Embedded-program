#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fpm,*fp;
	char ch,str[20];
	int i;
	printf("enter file name");
	scanf(" %s",str);

	fpm=fopen(str,"w");
	for(i=1;i<argc;i++)
	{
		fp=fopen(argv[i],"r");
		while((ch=fgetc(fp))!=EOF)
		{
			fputc(ch,fpm);
		}
		fclose(fp);
	}
	fclose(fpm);
printf("data successfully merged");

}
