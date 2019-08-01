#include"headers.h"
extern NODE *head;
void delete(void)
{
	char r,n,choice,s[20];
	int r1,c,a=0;
	NODE *temp,*prev;
	if(head==NULL)
	{
		printf("no data available\n");
		return;
	}
	printf("r/R:based on roll no\n");
	printf("n/N:based on name\n");
	scanf(" %c",&choice);

	if(choice=='n')
	{
		printf("enter name\n");
		scanf(" %s",s);
		temp=head;
		prev=temp;
		while(temp)
		{	
			if(strcmp(temp->name,s)==0)
			{	
				a++;
				printf(" %d %s %f\n",temp->roll,temp->name,temp->per);
				if(a==1)
					c=temp->roll;
			}
			prev=temp;
			temp=temp->link;
		}
		if(a==1)
		{
			temp=head;
			prev=temp;
			while(temp)
			{
				if(temp->roll==c)
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
			else 	
			{
				prev->link=temp->link;
				free(temp);
			}

		}	

		if(a>1)
		{
			printf(" %d more data which is similar to ur provided name\n",a-1);
			temp=head;
			prev=temp;
			printf("so u need to enter now roll no\n enter roll no you want to delete\n");
			scanf(" %d",&r1);	


			while(temp)
			{
				if(temp->roll==r1)
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
			else 	
			{
				prev->link=temp->link;
				free(temp);
			}

			printf("data deleted\n");
		}
	}

	if(choice=='r')
	{
		temp=head;
		prev=temp;
		printf("enter roll no to delete\n");
		scanf(" %d",&r1);

		while(temp)
		{	
			if(temp->roll==r1)
			{
				break;
			}
			prev=temp;
			temp=temp->link;
		}
		if(temp==0)
		{
			printf("Data not found\n");
			return;
		}
		if(temp==head)
		{
			head=head->link;
			free(temp);
		}
		else 	
		{
			prev->link=temp->link;
			free(temp);
		}

		printf("data successfully deleted\n");
	}	


}
