#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char str[100],ch;
	puts("enter a string");
	gets(str);
//	puts("enter charactor");
//	scanf("%c",&ch);

	for(i=0;str[i];i++)
	{
		if(!((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')))
		{
			memmove(str+i,str+i+1,strlen(str+i));
i--;
		}

	}

	printf("str:%s\n",str);

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

