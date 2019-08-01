#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0,max=5;
struct st_cap
{
	char state[20];
	char capital[20];
};
void add(struct st_cap *);
void sort(struct st_cap *);
void print(struct st_cap *);
void delete(struct st_cap *);
void search(struct st_cap *);
void update(struct st_cap *);
void reverse(struct st_cap *);
main()
{
	struct st_cap v[5];
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
		switch(ch)
		{
			case 'a':add(v);
				 break;
			case 'u':update(v);
				 break;
			case 'd':delete(v);
				 break;
			case 's':search(v);
				 break;
			case 't':sort(v);
				 break;
			case 'r':reverse(v);
				 break;
			case 'e': exit(0);
				  break;
			case 'p': print(v);
				  break;
			default:
				  printf("\ninvalid choice\n");
		}

	}	
}
void reverse(struct st_cap *v)
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
				for(j=0,k=strlen(v[i].state)-1;j<k;k--,j++)
				{
					temp=v[i].state[j];
					v[i].state[j]=v[i].state[k];
					v[i].state[k]=temp;
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
				for(j=0,k=strlen(v[i].capital)-1;j<k;k--,j++)
				{
					temp=v[i].capital[j];
					v[i].capital[j]=v[i].capital[k];
					v[i].capital[k]=temp;
				}
			}
		}
	}
	else 
		printf("invalid choice\n");
}
void sort(struct st_cap *v)
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
				if((strcmp(v[i].state,v[j].state))>0)
				{
					strcpy(temp,v[i].state);
					strcpy(v[i].state,v[j].state);
					strcpy(v[j].state,temp);
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
				if((strcmp(v[i].capital,v[j].capital))>0)
				{
					strcpy(temp,v[i].capital);
					strcpy(v[i].capital,v[j].capital);
					strcpy(v[j].capital,temp);
				}
			}		
		}
	}
	else
		printf("invalid choice\n");
}
void update(struct st_cap *v)
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
		strcpy(v[n-1].state,s);
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
		strcpy(v[n-1].capital,s);
	}
	else 
		printf("invalid choice\n");
}
void search(struct st_cap *v)
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
				if(strstr(v[i].state,s))
				{
					printf("match found at state list no %d and\n",i+1);
					flag=0;
				}

			}
			if(flag)

				printf("\nnot found\n");
		}
	}
	else if(a==2)
	{
		if(cnt>0)
		{
			printf("enter a capital which u want to search\n");
			scanf(" %[^\n]s",s);
			for(i=0;i<cnt;i++)
			{
				if(strstr(v[i].capital,s))
				{
					printf("match found at capital list no %d and\n",i+1);
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
void delete(struct st_cap *v)
{
	int i,j;
	if(cnt==0)
	{
		printf("no entry available\n");
		return;
	}
	printf("which state or capital want to be deleted give the no\n");
	scanf(" %d",&i);i--;
	if(i==-1)
	{
	printf("no entry available at this no ..give valid entry");
	return;
	}
	if(i>max)
		printf("invalid no");
	if(cnt>i)
	{
		for(j=i;j<cnt;j++)
		{
			strcpy(v[j].state,v[j+1].state);
			strcpy(v[j].capital,v[j+1].capital);
		}
		cnt--;

	}
}
void add(struct st_cap *v)
{
	if(cnt==max)
	{
		printf("no space available"); return;
	}
	printf("\nadd a state name: ");
	scanf(" %[^\n]s",v[cnt].state);
	printf("\nadd a capital name: ");
	scanf(" %[^\n]s",v[cnt].capital);
	cnt++;
	return;
}
void print(struct st_cap *v)
{
	int i=0;
	while(i<cnt)
	{
		printf("%s\t \t||\t \t",v[i].state);
		printf("%s\n",v[i].capital);
		i++;
	}

}
