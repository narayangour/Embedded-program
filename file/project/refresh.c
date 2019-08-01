#include"headers.h"
extern NODE *head;
void refresh(void)
{
	FILE *fp;
	NODE *temp,*new,v;
	char choice;
	fp=fopen("student_dat","r");
	if(fp==NULL)
	{
		return;
	}
	while((fread(&v,sizeof(NODE),1,fp))==1)
	{	
		new = malloc(sizeof(NODE));
		new->roll=v.roll;
		strcpy(new->name,v.name);
		new->per=v.per;

		new->link=NULL;
		if(head==0)
		{
			head=new;
			temp=new;
		}
		else
		{
			temp->link=new;
			temp=new;
		}
	}
		fclose(fp);
}
