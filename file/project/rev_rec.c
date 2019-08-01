#include"headers.h"
extern NODE *head;
NODE* rev_rec(NODE *p)
{
	NODE *ret;
	p->link->link=p;
//	if(head==NULL)
//	{
//	printf("no data available for reversing so first go through add option\n");
//		return;
//	}
	if(p)
	{
	ret=rev_rec(p->link);
	}
	return p;
	

//	printf("------------------------------------\n");
//	printf("data successfully reversed\n");
}
