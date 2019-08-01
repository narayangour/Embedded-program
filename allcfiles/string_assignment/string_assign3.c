////////////assignment3/////////
#include<stdio.h>
#include<string.h>
main()
{
char str[1000];
int i;
printf("enter string");
gets(str);
for(i=0;str[i];i++)
{
while(!(((str[i]>='a') && (str[i]<='z'))||((str[i]>='A') && (str[i]<='Z')))&&str[i])
strcpy(str+i,str+i+1);
}
printf("%s\n",str);
}
////whichever charactor is repeatative remove it//////
/*{

	char ch,str[20],*p;
	int cnt=0,i=0;
	puts("enter a string");
	gets(str);
	puts("enter a charactor");
	ch=getchar();
	do
	{
		(ch=str[i]);

			p=strchr(str+i+1,ch);
		if(p)
		{
			strcpy(p,p+1);
			i--;
		}
		i++;	
	}while(str[i]);
	printf("str=%s",str);
}*/
///////////removing the repeating charactor from given string////////////
	//{

	//	int cnt=0,i=0;
	//	puts("enter a string");
	//	gets(str);
	//	puts("enter a charactor");
	//	ch=getchar();
	//for(i=0;str[i];i++)
	//{
	//p=strchr(str,ch);
	//while(p=strchr(str,ch))
	//{
	//strcpy(p,p+1);
	//}
	//}
	//printf("str=%s",str);
	///////////////}
	///////////finding the repeating char on which place///////

//{
//	char ch,str[20],*p;
//	int cnt=0,i=0;
//	puts("enter a string");
//	gets(str);
//	puts("enter a charactor");
//	ch=getchar();
//	p=strchr(str,ch);
//	if(p==NULL)
//		printf("not found");
//	else printf("found at %d",p-str);}
//	////////////////////////////////////////////////
	//{
	//char *p;
	//p=strchr("multinational",'n');
	//printf("%s\n",p);
	//p=strrchr("multinational",'n');
	//printf("%s\n",p);
	//}
