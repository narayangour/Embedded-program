#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* rem_c(char *);
char* incl(char *);
main(int argc,char **argv)
{
	int i,l,size,j;
	FILE *fp;
	char *a=NULL,ch,*buff,c1,c2;

	l=strlen(argv[1]);

//	a=realloc(a,(l+1)*(sizeof(char)));

	a=calloc(1,l+1);
	printf(" string lenth if file name=%d",l);
	for(i=0;i<l-1;i++)
	{	
		if(argv[1][i]=='.')
		{
		a[i]='.';	
		break;
		}
		a[i]=argv[1][i];
	}
	a[i+1]='i';
	//a[i+2]='\0';///not necessary bcoz we have already used calloc function//
	printf(" %s\n",a);

///now test.c is opened in read mode////
	fp=fopen(argv[1],"r");
	fseek(fp,0,2);
	size=ftell(fp);
	rewind(fp);
	buff=calloc(1,(size)+1);
	for(i=0;i<size;i++)
	{
		buff[i]=fgetc(fp);
	}
	fclose(fp);
//all data has been copied to buff////
	incl(buff);
	rem_c(buff);
//now test.i file opened and write them////////
	fp=fopen(a,"w");
	i=0;
	while(buff[i])
	{
		fputc(buff[i],fp);
		i++;
	}
	fclose(fp);
}
