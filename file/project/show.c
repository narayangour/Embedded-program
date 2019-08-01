
#include"headers.h"
extern NODE *head;
//extern int roll_no;
void show(void)
{
	NODE *temp;
	temp=head;
	if(temp==NULL)
	{	
		printf("no data available\n");return;		
	}
	else
	{
		printf("ROLL NO\t\tNAME\t\tPERCENTAGE\n");
		while(temp)
		{
			printf(" %d\t|",temp->roll);
			printf("\t");
			printf(" %s\t|",temp->name);
			printf("\t");
			printf(" %0.2f""%%\t|",temp->per);
			printf("\t\n");
			temp=temp->link;
		}//while

	}//else
}//add
