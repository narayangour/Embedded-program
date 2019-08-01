#include<stdio.h>
main(int argc,char **argv)
{
	char ch;
	int line=0,word=0,cnt=0;
	FILE *ptr;
	if(argc!=2)
	{
		printf("ERROR: usage ./rd<filename>");
		return;
	}
	ptr=fopen(argv[1],"r");
	if(ptr==NULL)
	{
		printf("ERROR:not available file with this name try to give proper name\n");
		return;
	}
	ch=fgetc(ptr);
	cnt++;
	if(ch=='\n')
	line++;
	while(ch!=EOF)
	{


		if(ch!=' '&& ch!='\n'&& ch!=EOF)
		{
			ch=fgetc(ptr);
			cnt++;
			if(ch=='\n')
			 line++;
			if(!(ch!=' '&& ch!='\n'&& ch!=EOF))

			{  	
				word++;
				ch=fgetc(ptr);
				cnt++;
				if(ch=='\n')
				line++;
			}
		}
		else
		{
			ch=fgetc(ptr);
			cnt++;	
			if(ch=='\n')line++;
		}

	}
	printf("line=%d ,word=%d,character=%d\n",line,word,cnt);
	fclose(ptr);
}
