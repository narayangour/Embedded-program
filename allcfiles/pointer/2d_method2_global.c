#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void add(void);
void print(void);
void delete(void);
void reverse(void);
void sort(void);
void update(void);
void search(void);
int cnt=0;
char (*str)[20]=NULL;
main()
{
char ch;
	while(1)
	{	
printf("\n");
printf("select ur choice from this manu table\n");
printf("\n");
		printf("/////////////////////////////////////////////");
		printf("\na:> add a string\n"); 
		printf("d:> delete a string\n"); 
		printf("p:> print strings\n"); 
		printf("s:> search a string\n"); 
		printf("r:> reverse the string\n"); 
		printf("t:> sort string\n"); 
		printf("u:> update(modify) a string\n"); 
		printf("e:> exit\n"); 
		printf("/////////////////////////////////////////////");
		printf("\nenter ur choice: ");
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'a':add();
				 break;
			case 'u':update();
				 break;
			case 'd':delete();
				 break;
			case 's':search();
				 break;
			case 't':sort();
				 break;
			case 'r':reverse();

				 break;
			case 'e': exit(0);
				  break;
			case 'p': print();
				  break;
			default:
				  printf("\ninvalid choice\n");
		}

	}	
}
void update(void)
{
	int n;
	char s[20];
	if(cnt==0)
	{
		printf("currently no sting is available\n");
		return;
	}
	printf("enter string no. which u want to modify ");
	scanf("%d",&n);
	if(n>cnt)
	{
		printf("no string available at this location \n enter a valid location ");
		return;
	}
	puts("enter a string");
	getchar();
	gets(s);
	strcpy(str[n-1],s);
}
void sort(void)
{
	int i,j;
	char temp[20];
	if(cnt<1)
	{
		printf("enter more string for sorting\n");
	}
	for(i=0;i<cnt;i++)
	{
		for(j=i+1;j<cnt;j++)
		{
			if((strcmp(str[i],str[j]))>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
}
void reverse(void)
{
	int i,j,k;
	char temp;
	if(cnt==0)
	{
		printf("no string available that u can reverse\n");
		return;
	}
	if(cnt>0)
	{
		for(i=0;i<cnt;i++)
		{
			//			printf("%s\n",p[i]);
			for(j=0,k=strlen(str[i])-1;j<k;k--,j++)
			{
				temp=str[i][j];
				str[i][j]=str[i][k];
				str[i][k]=temp;
			}
		}
	}

}
void search(void)
{
	int i,flag=0;
	char s[20];
	puts("enter string which u want to search");
	scanf(" %[^\n]s",s);
	for(i=0;i<cnt;i++)
	{
		if(strstr(str[i],s))
		{
			printf("match found at string no %d and\n",i+1);
			flag=0;
		}

	}
	if(flag)
		printf("\nnot found\n");

}
void delete(void)
{
	int i;
	char s[20];
	puts("enter a string to delete");
	getchar();
	gets(s);
	for(i=0;i<cnt;i++)
	{
		if(strcmp(str[i],s)==0)
			break;
	}
	if(i==cnt)
	{
		printf("error:string not found");return;
	}
	memmove(str+i,str+i+1,(cnt-i-1)*20);
	cnt--;
	str=realloc(str,cnt*20);
}
void add(void)
{
	cnt++;
	str=realloc(str,cnt*20);

	printf("add a string : ");
	scanf(" %[^\n]s",str[cnt-1]);
	return;
}

void print(void)
{
	int i;
	for(i=0;i<cnt;i++)
		printf("%s\n",str[i]);

}

