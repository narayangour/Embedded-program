#include"headers.h"
extern NODE *head;
//int cnt=0;
int load(int **a)
{
//////////////////  creating array of roll no ///////////////
	int i=0;
	NODE *temp=head;
	while(temp)
	{

		*a=realloc(*a,sizeof(int));
		(*a)[i]=temp->roll;
		i++;
		temp=temp->link;
	}
	return i;
}

void sort(int *a,int size)
{
	int i,j,b;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
}

int next_valid_roll(int *a,int size)
{
	int roll=1;
	while( roll<=size && a[roll-1]==roll)
		roll++;
	return roll;
}

void add(void)
{
	NODE *new=NULL,*temp;
	int roll,size,*a=NULL;
//	new=realloc(0,44);
	new=malloc(sizeof(NODE));
	size=load(&a);
	sort(a,size);
	roll=next_valid_roll(a,size);
//	cnt++;
	new->roll=roll;
	if(a!=NULL)
	free(a);

	a=NULL;
	printf("enter your name\n");
	scanf(" %s",new->name);
level:
	printf("enter your percentage\n");
	scanf(" %f",&(new->per));
	if((new->per)>100)
	{
		printf("data should come with range...don't go beyond hundred\n");
		goto level;
	}
	if(head==NULL)
	{	
		head=new;
		new->link=0;
	}
	else
	{
		temp=head;
		while(temp->link)
		{
			temp=temp->link;
		}
		new->link=0;
		temp->link=new;

	}
}
