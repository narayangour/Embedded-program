#include"headers.h"
extern NODE *head;
void sort(void)
{
	NODE *temp,*next,*prev;
	char ch;
	int i,j,n=0;
	float temp1,b;
	printf("enter\ns/s:sort with name\nP/p:sort with percentage\n");
	scanf(" %c",&ch);
	if(ch=='s')
	{
		//	int i,j,temp;
		temp=head;
		while(temp)
		{
			n++;
			temp=temp->link;
		}

		printf("how many record available %d\n",n);

		temp=head;
		if(temp==NULL)
		{
			printf("no data available\n");return;
		}
		else 
		{
			for(i=0;i<n;i++)
			{

				for(j=0;j>=n-1-i;j++)
				{	
					if(temp->per>temp->link->per)
					{
						temp1=temp->link	
						temp->per=temp->link->per;
						temp->link->per=b;
						temp=temp->link;
						
					}

						

				}
//				temp->per=temp1;
				temp=temp->link;
			}

		}
	}
	else if(ch=='p')
	{
		;
	}
	else
		printf("invalid choice\n");

}
