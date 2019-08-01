#include"headers.h"
extern NODE *head;
void mod(void)
{
	char r,n,choice,s[20],ch;
	int r1,p,a=0,c,arr[10],i;
	float f;
	NODE *temp,*prev,*temp1;
	if(head==NULL)
	{
		printf("no data available for modification so first go through add option\n");
		return;
	}
	printf("enter which record to search for modification\n");
	printf("r/R:to search a roll no\n");
	printf("n/N:to search a name\n");
	printf("p/P:percentage based\n");
	scanf(" %c",&choice);
	if(choice=='p')
	{
		printf("enter your percentage\n");
		scanf(" %f",&f);
		temp=head;
		prev=temp;
		while(temp)
		{
			if(temp->per==f)
			{	
				printf("enter new percentage\n");
				scanf(" %f",&temp->per);
				printf("data has been modified\n");
				break;
			}
			temp=temp->link;
		}
		if(temp==0)
			printf("record not found\n");
	}
	if(choice=='n')
	{
		printf("enter name:\n");
		scanf(" %[^\n]s",s);
		temp=head;
		prev=temp;
		while(temp)
		{
			if(strcmp(temp->name,s)==0)
			{

				a++;
				printf(" %d %s %0.2f\n",temp->roll,temp->name,temp->per);
				if(a==1)
					temp1=temp;
			}
			temp=temp->link;
		}
		if((temp==0)&&(a==0))
		{
			printf("------------------------------------------\n");
			printf("not found data related with this name\n");
			return;
		}
		if(a==1)	
		{
			printf("match found\nenter new name\n");
			scanf(" %[^\n]s",temp1->name);
			printf("enter new percentage\n");
			scanf(" %0.2f",&temp1->per);
		}
		if(a>1)
		{
			printf("multiple entry with this name\nso please provide roll no\nenter your roll no.:\n");		
			scanf(" %d",&c);
			temp=head;
			prev=temp;
			while(temp)
			{	
				if(temp->roll==c)				
				{	
					printf("enter new name\n");
					scanf(" %[^\n]s",temp->name);
					printf("you want to update percentage also\n1.y\n2.n\n");
					scanf(" %c",&ch);
					if(ch=='y')
					{
						printf("enter new percentage\n");
						scanf(" %0.2f",&temp->per);
					}
					else
						break;
				}
				temp=temp->link;
			}
			printf("data modified\n");
		}

	}

	if(choice=='r')
	{
		printf("enter roll no:\n");
		scanf(" %d",&r1);
		temp=head;
		prev=temp;
		while(temp)
		{	
			if(temp->roll==r1)				
			{	
				printf("your roll no. matched with records\nso\n\n");
				printf("enter new name\n");
				scanf(" %[^\n]s",temp->name);

				printf("you want to update percentage also\n1.y\n2.n\n");
				scanf(" %d",&ch);
				if(ch=='y')
				{
					printf("enter new percentage\n");
					scanf(" %0.2f",&temp->per);
				}
				else
					break;


				printf("data has been modified\n");
				break;
			}
			temp=temp->link;
		}
		if(temp==0)
			printf("roll no. not found\n");
	}
}
