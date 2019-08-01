#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	char  (*p)[100],ch,temp,s[100];
	int n,i,line=0,cnt=0,j,k;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("file not found\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
	{	
			if(ch=='\n')
			line++;
	}
	printf("line---->%d\n",line);
	fclose(fp);
p=malloc(100*line);
	fp=fopen(argv[1],"r");
for(i=0;i<line;i++)	
{
	fgets(p[i],100,fp);
	
}
fclose(fp);
for(i=0;i<line;i++)	
	{

		if((strstr(p[i],argv[2]))!=0)
		{
			n=strlen(p[i]);
			for(j=0,k=n-1;j<k;j++,k--)
			{
				temp=p[i][j];
				p[i][j]=p[i][k];
				p[i][k]=temp;
			}		

		}

	}
fp=fopen(argv[1],"w");
	for(i=0;i<line;i++)
		fputs(p[i],fp);
fclose(fp);
}
