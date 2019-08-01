#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char str[100],ch;
	puts("enter a string");
	gets(str);

/*
	for(i=0;str[i];i++)
	{
		while(str[0]==32)
			strcpy(str,str+1);

		if(str[i]==32 && str[i+1]==32)
		{
			memmove(str+i,str+i+1,strlen(str+i));
			i--;
		}
		while(str[strlen(str)-1]==32)
		str[strlen(str)-1]='\0';

	}

	printf("str:%s\n",str);*/

	////without memeove funtion////////////

	for(i=0;str[i];i++)
	{
		if(!((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')))
		{
			strcpy(str+i,str+i+1);
			i--;
		}
	}
	printf("str:%s\n",str);

}

