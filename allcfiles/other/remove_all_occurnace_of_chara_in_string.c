#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char str[100],ch;
	puts("enter a string");
	gets(str);
	puts("enter charactor");
	scanf("%c",&ch);

	for(i=0;str[i];i++)
	{

		if(ch==str[i])
		{
			memmove(str+i,str+i+1,strlen(str+i));
		}
	
	}

	printf("str:%s\n",str);

////without memeove funtion////////////

	for(i=0;str[i];i++)
	{
		if(ch==str[i])
		{
			strcpy(str+i,str+i+1);
		}
	}
	printf("str:%s\n",str);

}

