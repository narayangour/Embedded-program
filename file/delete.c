#include"headers.h"
extern NODE *head;
void delete(void)
{
	char r,n,choice;
	NODE *temp,*prev;
	temp=head;
	prev=temp;
	printf("r/R:based on roll no\n");
	printf("n/N:based on name\n");
	scanf(" %c",&choice);
	if(choice=='r')
	{
		int r;
		temp=head;
		printf("enter roll no to delete\n");
		scanf("%d",&r);
		
		while(temp)
		{	
		//	if(temp->link->link)
		//	{
		//	head=temp->link;
		//	free(temp);
		//	break;
		//	}
			if(temp->roll==r)
			{
				break;
			}
			prev=temp;
			temp=temp->link;
		}
		if(temp==head)
		{
			head=head->link;
			free(temp);
		}
		if(temp==0)
		{
			printf("data not found\n");return;
		}
		{
			prev->link=temp->link;
			free(temp);
		}return;
		printf("data successfully deleted\n");
	}	
	if(choice=='n')
	{
		int r,n,b=0;
		char s[20];
		printf("enter name\n");
//		__fpurge(stdin);
		scanf(" %s",s);
		while(temp)
		{	
			if((strcmp(temp->name,s))==0)
			{
				printf(" %d\t %s \t%f\n",temp->roll,temp->name,temp->per);
			}
			temp=temp->link;
		}
		printf("enter roll no which you want to delete\n");
	//	__fpurge(stdin);
		scanf(" %d",&n);
		temp=head;
		//while((temp->link))
		while(temp)
		{			
			if(temp->roll==n)
			{
			prev->link=temp->link;
			free(temp);
			break;
			}	
			prev=temp;
			temp=temp->link;
		}
		if(temp==head)
		{
			head=head->link;
			free(temp);
		}
	//		prev->link=temp->link;
	//		free(temp);
			printf("data successfully deleted\n");
		}
	}

