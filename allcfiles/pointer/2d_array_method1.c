#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0,max=5;
void add(char(*)[]);
void update(char(*)[]);
void delete(char (*)[]);
void print(char (*)[]);
void search(char (*)[]);
void reverse(char (*)[]);
void sort(char (*)[]);
main()
{
	char s[5][20]={0},ch;
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
			case 'a':add(s);
				 break;
			case 'u':update(s);
				 break;
			case 'd':delete(s);
				 break;
			case 's':search(s);
				 break;
			case 't':sort(s);
				 break;
			case 'r':reverse(s);
				 break;
			case 'e': exit(0);
				  break;
			case 'p': print(s);
				  break;
			default:
				  printf("\ninvalid choice\n");
		}

	}	
}
void update(char (*p)[20])
{
	int i,n;
	char str[20];
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
	printf("enter a string");
	scanf(" %[^\n]s",str);
	strcpy(p[n-1],str);
}
void sort(char (*p)[20])
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
			if((strcmp(p[i],p[j]))>0)
			{
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}
		}
	}
}
void reverse(char (*p)[20])
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
			for(j=0,k=strlen(p[i])-1;j<k;k--,j++)
			{
				temp=p[i][j];
				p[i][j]=p[i][k];
				p[i][k]=temp;
			}
		}
	}

}
void search(char (*p)[20])
{
	int i,flag=1;
	char s[20];
	if(cnt==0)
	{
		printf("no data available that u can search\n");
		return;
	}
	if(cnt>0)
	{
		printf("enter a string which u want to search\n");
		scanf(" %[^\n]s",s);
		for(i=0;i<cnt;i++)
		{
			if(strstr(p[i],s))
			{
				printf("match found at string no %d and\n",i+1);
				flag=0;
			}

		}
		if(flag)
			printf("\nnot found\n");

	}
}
void delete(char (*p)[20])
{
	int i,j;
	if(cnt==0)
	{
		printf("no string available");
		return;
	}
	printf("which string to be deleted");
	scanf(" %d",&i);i--;
	if(cnt>i)
	{
		for(j=0;j<cnt;j++)
			strcpy(p[i],p[i+1]);
		cnt--;
	}
}
void add(char (*p)[20])
{
	if(cnt==max)
	{
		printf("no space available"); return;
	}
	printf("add a string : ");
	scanf(" %[^\n]s",p[cnt]);
	cnt++;
	return;
}

void print(char (*p)[20])
{
	int i=0;
	while(i<cnt)
	{
		printf("%s\n",p[i]);
		i++;
	}
}

