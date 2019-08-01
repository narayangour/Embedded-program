#include"headers.h"
extern NODE *head;
void reverse(void)
{
	NODE *cur,*prev,*next;
	if(head==NULL)
	{
	printf("no data available for reversing so first go through add option\n");
		return;
	}
	prev=0;
	cur=head;
	while(cur)
	{
		next=cur->link;
		cur->link=prev;
		prev=cur;
		cur=next;
	}
	head=prev;
	
printf("------------------------------------\n");
	printf("data successfully reversed\n");
}
