#include<stdio.h>
#include<string.h>
main()
{
	int l1,l2;

	char str[]="parul";
	char str2[]="devanshi";
	l1=strlen(str);
	l2=strlen(str2);
	printf("%d\n",l1-l2);
	printf("%d\n",(strlen(str)-strlen(str2)));
	if((strlen(str)-(strlen(str2))))
		//if((l1-l2)>=0)
		puts(str);
	else
		puts(str2);
}

