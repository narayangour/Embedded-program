#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* incl(char *buff)
{
	char *ptr,*a=NULL,*b,ch;
	FILE *fp;
	int i;
	ptr=buff;
	while(ptr=strstr(ptr,"#include"))
	{
		i=0;
		ptr=ptr+strlen("#include");
		if(*ptr=='<')
		{
			i=1;
			ptr++;
			while((*ptr)!='>')
			{
				a=realloc(a,i*sizeof(char));
				a[i-1]=*ptr;
				ptr++;
				i++;
			}
			printf(" %s\n",a);
			b=malloc(strlen("/usr/include/")+i*sizeof(char));
			strcpy(b,"/usr/include/");
			a=realloc(a,strlen("/usr/include/"));
			strcat(b,a);
			printf(" %s\n",b);	
////////////////////////////////////////////////////////////////////////////
		fp=fopen(b,"r");
			i=1;
		while(ch=fgetc(fp)!=EOF)
			{
			i++;
			}
		printf(" %d",i-1);

		}
	}
}
