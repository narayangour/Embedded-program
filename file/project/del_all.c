#include"headers.h"
extern NODE *head;
void del_all(void)
{
	NODE *temp,*prev;
	if(head==NULL)
	{
		printf("no data available\n");
		return;
	}
	while(head)
	{	
		temp=head;
		head=head->link;
		free(temp);
	}
	printf("all data successfully deleted\n");

}	
