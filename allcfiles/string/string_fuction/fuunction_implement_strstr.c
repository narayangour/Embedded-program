#include<stdio.h>
char * mystrstr(char *str1,char *str2);
main()
{
	char *p,str1[200],str2[100];
	printf("enter string 1st");
	gets(str1);
	printf("enter string 2nd");
	gets(str2);
	p=mystrstr(str1,str2);
	if(p)
		printf("found at =%d\n",p-str1);
	else 
		printf("not found\n");
}
char* mystrstr(char *p1,char*p2)
{
	int i,j;
	for(i=0;p1[i];i++)
	{
		if(p1[i]==p2[0])
		{    
			for(j=1;p2[j];j++)
			{
				if(p2[j]!=p1[i+j])
			                   break;
			}
                           
		}
		if(p2[j]=='\0')
		return p1+i;
	

 	}
	return NULL;
}
