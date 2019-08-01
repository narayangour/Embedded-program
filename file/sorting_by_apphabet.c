#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	char str[100],(*p)[100]=NULL,temp[100];
	FILE *fp;
	int line=0,i,j;
	fp=fopen(argv[1],"r");
	if (fp==NULL)
	{
		printf("error:");return;
	}
	i=0;
	while(fgets(str,100,fp))
	{
		line++;
		p=realloc(p,line*100);
		strcpy(p[line-1],str);
		
	}
	fclose(fp);
	for(i=0;i<line;i++)
	{
		for(j=0;j<line-i-1;j++)
		{
				if(strcmp(p[j],p[j+1])>0)
			{
				strcpy(temp,p[j]);
				strcpy(p[j],p[j+1]);
				strcpy(p[j+1],temp);
			}
		}
	}
	fp=fopen(argv[1],"w");

	i=0;
	while(i<line)
	{
		fputs(p[i],fp);
		i++;

	}
	fclose(fp);

}
