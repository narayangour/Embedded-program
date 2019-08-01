#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char **ptr,str[100],temp[100];
	int i=0,line=0,j;
	FILE *fp;
	fp=fopen("test.c","r");
	//	i=0;
	while(fgets(str,80,fp))
	{	
		//	ptr[i]=malloc(strlen(str));
		//	strcpy(ptr[i],str);
		line++;
	}
	printf("%d line \n",line);
	rewind(fp);

	/*	while((fgets(str,90,fp)))
		{	
		ptr[i]=malloc(90);
		strcpy(ptr[i],str);
		i++;
		}*/
//	ptr=malloc(sizeof(char *)*line);
	ptr=malloc(90*line);
	
	i=0;
	ptr[i]=malloc(90);
	while((fgets(ptr[i],90,fp)))
	{
		
		i++;
		ptr[i]=malloc(90);
	}
	printf("1111111111111");
	printf("******************add=%u----%u\n",&ptr[1],&ptr[0]);
	fclose(fp);
	for(i=0;i<line;i++)
	printf(" %s",ptr[i]);
	for(i=0;i<line;i++)
	{
		for(j=0;j<line-i-1;j++)
		{
			if(strcmp(ptr[j],ptr[j+1])>0)
			{
				strcpy(temp,ptr[j]);
				strcpy(ptr[j],ptr[j+1]);
				strcpy(ptr[j+1],temp);
			}
		}
	}
	for(i=0;i<line;i++)
	printf(" %s",ptr[i]);
	fp=fopen("test.c","w");
	i=0;
	while((fputs(ptr[i],fp)!=-1))
	i++;

	fclose(fp);

}
