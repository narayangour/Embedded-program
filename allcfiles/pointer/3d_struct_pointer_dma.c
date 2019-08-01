#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0,max=5;
struct student 
{
	char name[20];
	float marks;
	int roll;
	struct dob	
		{
		int day;
		char month[10];
		int year;
		}dob;

}v;
struct student* add(struct student *);
struct student *sort(struct student *);
struct student*print(struct student *);
struct student *delete(struct student *);
//void search(struct student *);
//void update(struct student *);
//void reverse(struct student *);
main()
{
	struct student *v=NULL;
	char ch;
	while(1)
	{	
		printf("\n");
		printf("\t\tselect ur choice from this manu table\n");
		printf("\n");
		printf("\t---------------------------------------------------");
			printf("\n\t\ta:> add a record\n"); 
			printf("\t\td:> delete a record\n"); 
			printf("\t\tp:> print record\n"); 
			printf("\t\ts:> search a record\n"); 
			printf("\t\tr:> reverse the record\n"); 
			printf("\t\tt:> sort record\n"); 
			printf("\t\tu:> update(modify) a record\n"); 
                        printf("\t\te:> exit\n"); 
               printf("\t----------------------------------------------------");
			printf("\n\t\tenter ur choice: \n");
			scanf(" %c",&ch);
		switch(ch)
		{
			case 'a':v=add(v);
				 break;
//			case 'u':update(v);
				 break;
			case 'd':v=delete(v);
				 break;
//			case 's':search(v);
				 break;
			case 't':sort(v);
				 break;
			case 'e': exit(0);
				  break;
			case 'p': print(v);
				  break;
			default:
				  printf("\ninvalid choice\n");
		}

	}	
}
struct student*sort(struct student *p)
{
	int i,a,j;
	float f;
	struct student temp;
	if(cnt<1)
	{
		printf("no entry available for sorting\n");
	}
	for(i=0;i<cnt;i++)
		{
			for(j=i+1;j<cnt;j++)
			{
				if((strcmp((p+i)->name,(p+j)->name))>0)
				{
				memmove(&temp,p+i,sizeof(struct student));
				memmove(p+i,p+j,sizeof(struct student));
				memmove(p+j,&temp,sizeof(struct student));

			
				}
					a=(p+i)->roll;
					(p+i)->roll=(p+j)->roll;
					(p+j)->roll=a;

					f=(p+i)->marks;
					(p+i)->marks=(p+j)->marks;
					(p+j)->marks=f;
			}		
		}
	
	}

struct student *delete(struct student *p)
{
	int i,j;
	if(cnt==0)
	{
		printf("\t\tno database available\n");
		return;
	}
	printf("\t\twhich database want to be deleted give the no\n");
	scanf(" %d",&i);i--;
	if(i==-1)
	{
	printf("no entry available at this no ..give valid entry");
	return;
	}
	if(i>max)
		printf("invalid no");
	if(cnt>i)
	{
		for(j=i;j<cnt;j++)
		{
			strcpy((p+j)->name,(p+j+1)->name);
			(p+j)->roll=(p+j+1)->roll;		
			(p+j)->marks=(p+j+1)->marks;
		}
		cnt--;
		p=realloc(p,(cnt)*sizeof(struct student));
	}
}

struct student *add(struct student *p)
{
	if(cnt==max)
	{
		printf("no database available"); return;
	}
	p=realloc(p,(cnt+1)*sizeof(struct student));
	
	printf("\n\t\tenter name: ");
	scanf(" %[^\n]s",(p+cnt)->name);
	printf("\n\t\tenter roll no: ");
	scanf(" %d",&(p+cnt)->roll);
	printf("\n\t\tenter mark: ");
	scanf("%f",&(p+cnt)->marks);
	printf("\t\tenter ur d.o.b as in this manner day/month/year:");
	scanf(" %d%s %d",&(p+cnt)->dob.day,(p+cnt)->dob.month,&(p+cnt)->dob.year);
	cnt++;
	return p;
}
struct student* print(struct student *p)
{
	int i=0;
	printf("name\t || roll no\t ||  \tmarks\t ||  \td.o.b\n");
	printf("-------------------------------------------------------------\n");
	while(i<cnt)
	{
		printf("%s\t || \t%d\t || \t%0.2f\t || \t%d\\%s\\%d\n",p->name,p->roll,p->marks,p->dob.day,p->dob.month,p->dob.year);
		i++;
		p++;
	}
	
	printf("------------------------------------------------------------\n");

}
void update(struct student *p)
{
	int n,a;
	struct student temp;
	if(cnt==0)
	{
		printf("currently no entry is available\n");
		return;
	}
	printf("\t\tselect ur choice\n 1.update name:\n 2.update roll no:\n 3. update marks:\n 4.update d.o.b:\n");
	scanf(" %d",&a);
	printf("\t\tenter index no which u want to modify: \n");
	scanf("%d",&n);
	if(n>cnt)
	{
		printf("no entry available at this location \n enter a valid location ");
		return;
	}
	if(a==1)
	{
		printf("\t\tnter a name\n");
		scanf(" %[^\n]s",&(p+cnt-1)->name);
	}
	else if(a==4)
	{
		printf("\t\tenter new d.o.b\n");
		scanf(" %d %s %d",&((p+n-1)->dob.day),(p+n-1)->dob.month,&((p+n-1)->dob.year));	

	}
	else if(a==2)
	{
		printf("\t\tenter a roll\n");
		scanf(" %d",&((p+n-1)->roll));
	}
	else if(a==3)
	{
		printf("\t\tenter a marks\n");
		scanf(" %f",&((p+n-1)->marks));
	}
	else 
		printf("\t\tinvalid choice\n");
}
void search(struct student *p)
{
	int i,a=0,flag=1;
	char s[20];
	if(cnt==0)
	{
		printf("no data available that u can search\n");
		return;
	}
	if(cnt>0)
		{
			printf("\t\tenter a name which u want to search\n");
			scanf(" %[^\n]s",s);
			for(i=0;i<cnt;i++)
			{
				if(strstr((p+i)->name,s))
				{
					printf("\t\tmatch found at state list no %d and\n",i+1);
					flag=0;
				}

			}
			if(flag)

				printf("\n\t\tnot found\n");
		}
	
		
}
