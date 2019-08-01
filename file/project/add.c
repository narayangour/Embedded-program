#include"headers.h"
extern NODE *head;
void add(void)
{
	NODE *new=NULL,*temp;
	int cnt=0,n=0,b,flag=0,i,j,*a=NULL;

	new=malloc(sizeof(NODE));
	cnt++;
//////////////////  creating array of roll no ///////////////
	i=1;
	temp=head;
	while(temp)
	{

		a=realloc(a,i*sizeof(int));
		a[i-1]=temp->roll;
		i++;
		temp=temp->link;
	}
///////////////////////// sorting roll array /////////////////
	n=i;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}

//////////////////// for finding missing roll ////////////////
	i=0;

level1:

	while(n>i) //for checking 
	{
		if(a[i]==cnt)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(!(flag))
	{
		new->roll=cnt;
	}
	else
	{
		cnt++;
		i++;
		flag=0;
		goto level1;
	}
	//free(a);

////////////////////////////////////////////////////////////////////////////////
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
