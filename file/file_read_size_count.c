/////////////////////////////////////////////////////////////////////////
//it will print all the character of file  that mean as it is printing
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int main(int argc,char **argv)
{ 	
	char ch;
	int i=1,cnt=0;
	FILE *ptr;
	while(i<argc)
	{
		ptr=fopen(argv[i],"r");
		if(ptr==NULL)
		{
			printf("ERROR:not available file with this name try to give proper name\n");
			return;
		}
		while((ch=fgetc(ptr))!=EOF)
		{
			cnt++;
		}

	printf("size of file %s=%d\n",argv[i],cnt);
	fclose(ptr);
	i++;	
		}
}
