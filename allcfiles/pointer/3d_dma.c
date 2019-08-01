#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0,max=5;
void add(char(**p));
//void delete(char((*p)[2][20]));
//void update(char((*p)[2][20]));
//void delete(char((*p)[2][20]));
void print(char(**p));
//void search(char((*p)[2][20]));
//void reverse(char((*p)[2][20]));
//void sort(char((**p)[20]));
char ***s=NULL;
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
		printf("\nenter ur choice: \n");
		scanf(" %c",&ch);
//		printf("-------------------------");
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
/*
void update(char((*p)[2][20]))
{
	int a,i,n;
	char s[20];
	if(cnt==0)
	{
		printf("currently no entry is available\n");
		return;
	}
	printf("select ur choice\n 1.update state\n 2.update capital\n");
	scanf(" %d",&a);
	if(a==1)
	{
		printf("enter state want to modify give the no.\n");
		scanf("%d",&n);
		if(n>cnt)
		{
printf("no entry available at this location \n enter a valid location ");
		return;
		}
	printf("enter a state\n");
	scanf(" %[^\n]s",s);
	strcpy(p[n-1][0],s);
	}
	else if(a==2)
	{
		printf("enter state want to modify give the no.\n");
	scanf("%d",&n);
	if(n>cnt)
	{
		printf("no entry available at this location \n enter a valid location ");
		return;
	}
	printf("enter a state");
	scanf(" %[^\n]s",s);
	strcpy(p[n-1][1],s);
	}
else 
printf("invalid choice\n");
}
void sort(char((*p)[2][20]))
{
	int i,a,j;
	char temp[20];
	if(cnt<1)
	{
		printf("no entry available for sorting\n");
	}
	printf("select ur choice\n 1.sort by state\n 2.sort by capital\n");
	scanf(" %d",&a);
	if(a==1)
	{
		for(i=0;i<cnt;i++)
		{
			for(j=i+1;j<cnt;j++)
			{
				if((strcmp(p[i][0],p[j][0]))>0)
				{
					strcpy(temp,p[i][0]);
					strcpy(p[i][0],p[j][0]);
					strcpy(p[j][0],temp);
				}
			}		
		}
	}
	else if(a==2)
	{
		for(i=0;i<cnt;i++)
		{
			for(j=i+1;j<cnt;j++)
			{
				if((strcmp(p[i][1],p[j][1]))>0)
				{
					strcpy(temp,p[i][1]);
					strcpy(p[i][1],p[j][1]);
					strcpy(p[j][1],temp);
				}
			}		
		}
	}
	else
	printf("invalid choice\n");
}
void reverse(char((*p)[2][20]))
{
	int i,a,j,k;
	char temp;
	if(cnt==0)
	{
		printf("no entry available that u can reverse\n");
		return;
	}
	printf("select ur choice\n 1.reverse by state\n 2.reverse by capital\n");
	scanf(" %d",&a);
	if(a==1)
	{
		if(cnt>0)
		{
			for(i=0;i<cnt;i++)
			{
				//			printf("%s\n",p[i]);
				for(j=0,k=strlen(p[i][0])-1;j<k;k--,j++)
				{
					temp=p[i][0][j];
					p[i][0][j]=p[i][0][k];
					p[i][0][k]=temp;
				}
			}
		}
	}
	else if(a==2)
	{
		if(cnt>0)
		{
			for(i=0;i<cnt;i++)
			{
				//			printf("%s\n",p[i]);
				for(j=0,k=strlen(p[i][1])-1;j<k;k--,j++)
				{
					temp=p[i][1][j];
					p[i][1][j]=p[i][1][k];
					p[i][1][k]=temp;
				}
			}
		}
	}
	else 
		printf("invalid choice\n");
}
void search(char((*p)[2][20]))
{
	int i,a=0,flag=1;
	char s[20];
	if(cnt==0)
	{
		printf("no data available that u can search\n");
		return;
	}
	printf("select ur choice\n 1.search by state\n 2.search by capital\n");
	scanf(" %d",&a);
	if(a==1)
	{
		if(cnt>0)
		{
			printf("enter a state which u want to search\n");
			scanf(" %[^\n]s",s);
			for(i=0;i<cnt;i++)
			{
				if(strstr(p[i][0],s))
				{
					printf("match found at string no %d and\n",i+1);
					flag=0;
				}

			}
			if(flag)

				printf("\nnot found\n");
		}
	}
	if(a==2)
	{
		if(cnt>0)
		{
			printf("enter a capital which u want to search\n");
			scanf(" %[^\n]s",s);
			for(i=0;i<cnt;i++)
			{
				if(strstr(p[i][1],s))
				{
					printf("match found at string no %d and\n",i+1);
					flag=0;
				}

			}
			if(flag)
				printf("\nnot found\n");
		}

	}
	else
	printf("invalid selection\n");
}
void delete(char((*p)[2][20]))
{
	int i,j;
	if(cnt==0)
	{
		printf("no entry available\n");
		return;
	}
	printf("which state or capital want to be deleted give the no\n");
	scanf(" %d",&i);i--;
	if(i>max)
	printf("invalid no");
	if(cnt>i)
	{
		for(i=0;i<cnt;i++)
			{
			strcpy(p[i][0],p[i+1][0]);
			strcpy(p[i][1],p[i+1][1]);
			}
		cnt--;
			
	}
}*/
void add(char(**p))
{
	if(cnt==max)
	{
		printf("no space available"); return;
	}
	printf("\nadd a state name: ");
	scanf(" %[^\n]s",p[cnt][0][20]);
	printf("\nadd a capital name: ");
	scanf(" %[^\n]s",p[cnt][1][20]);
	cnt++;
	return;
}

void print(char (**p))

{
	int i=0;
	while(i<cnt)
	{
		printf("%s\t \t||\t \t",p[i][0][20]);
		printf("%s\n",p[i][1][20]);
		i++;
	}
	printf("--------------------------");
}

