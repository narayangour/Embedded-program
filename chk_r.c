#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	char  (*p)[100],ch,temp;
	int n,i,line=0,cnt=0,j,k;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("file not found\n");
		return;
	}
	while(ch=fgetc(fp)!=EOF)
	{
		if(ch=='\n')
			line++;
		cnt++;
	}
	fclose(fp);
p=malloc(100*line);
///
//
///	buff=calloc(1,cnt+1);

//
//	fp=fopen(argv[1],"r");
//	for(i=0;i<cnt;i++)
//	buff[i]=fgetc(fp);
//	fclose(fp);
//	
for(i=0;i<line;i++)	
{
	fgets(p[i],100,fp);
	{

		if(strstr(p[i],argv[2]))
		{
			n=strlen(p[i]);
			for(j=0,k=n;j<k;j++,k--)
			{
				temp=p[i][j];
				p[i][j]=p[i][k];
				p[i][k]=temp;

			}		

		}

	}
}
fp=fopen(argv[1],"w");
	for(i=0;i<line;i++)
		fputs(p[i],fp);
fclose(fp);
}
