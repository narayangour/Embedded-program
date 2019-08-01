#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0;
FILE *fp;
struct student
{
	char name[20];
	int roll;
	float mark;
	struct dob
			{
				int day;
				int month;
				int year;
			}date;

}v;
void add_record(void);
void sort_record();
void print_record(void);
void delete_record(void);
//void search(struct st_cap *);
void update_record(void);
//void reverse(struct st_cap *);
main()
{
	struct student v;
	char ch;
	while(1)
	{	

	printf("---------------------------------------------------\n");
		printf("select ur choice from this manu table\n");
		printf("\n");
		printf("/////////////////////////////////////////////");
		printf("\na:> add a new record\n"); 
		printf("d:> delete a record\n"); 
		printf("p:> print record\n"); 
		printf("s:> search a record\n"); 
//		printf("r:> reverse the string\n"); 
		printf("t:> sort record\n"); 
		printf("u:> update(modify) a record\n"); 
		printf("e:> exit\n"); 
		printf("/////////////////////////////////////////////");
		printf("\nenter ur choice: \n");
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'a':add_record();
				 break;
			case 'u':update_record();
				 break;
			case 'd':delete_record();
				 break;
		//	case 's':search record(v);
	//			 break;
			case 't':sort_record();
				 break;
//			case 'r':reverse(v);
				 break;
			case 'e': exit(0);
				  break;
			case 'p': print_record();
				  break;
			default:
				  printf("\ninvalid choice\n");
		}

	}	
}
void sort_record(void)
{
	struct student *v,temp;
	int size,cnt,r,i,j;
	char name[20];
	float mark;
	FILE *fp;
	fp=fopen("student_database","r");
	fseek(fp,0,2);
	size=ftell(fp);
	cnt=((size)/(sizeof(struct student)));
	rewind(fp);
	v=calloc(cnt,sizeof(struct student));
	fread(v,sizeof(struct student),cnt,fp);
	fclose(fp);
	////////////////////////
	//entire data file brought to dynamic array
	////////////////////
	for(i=0;i<cnt;i++)
	{
		for(j=0;j<cnt-i-1;j++)

			if(((v+j)->roll)>((v+j+1)->roll))
			{
				memmove(&temp,(v+j),sizeof(struct student));					memmove((v+j),(v+j+1),sizeof(struct student));
				memmove((v+j+1),&temp,sizeof(struct student));
			}
	}
	///////////////////////////////////////////////////////
	fp=fopen("student_database","w");
	fwrite(v,sizeof(struct student),cnt,fp);
	printf("record successfully sorted.....");
	fclose(fp);

}
void update_record(void)
{
	struct student *v;
	int size,cnt,r,i,a,roll;
	char name[20];
	float mark;
	FILE *fp;
	fp=fopen("student_database","r");
	fseek(fp,0,2);
	size=ftell(fp);
	cnt=((size)/(sizeof(struct student)));
	rewind(fp);
	v=calloc(cnt,sizeof(struct student));
	fread(v,sizeof(struct student),cnt,fp);
	fclose(fp);
	////////////////////////
	//entire data file brought to dynamic array
	////////////////////
	printf("enter roll no");
	scanf("%d",&r);
	for(i=0;i<cnt;i++)
	{
		if((v+i)->roll==r)
		{
			printf("select ur choice:\n1.roll no\n2.marks\n3.name\n");
			scanf("%d",&a);
			if(a==1)
			{
				printf("enter new roll no");
				scanf("%d",&roll);
				(v+i)->roll=roll;
			}
			else if(a==2)
			{
				printf("enter new mark:");
				scanf("%f",&mark);
				(v+i)->mark=mark;
			}
			else if(a==3)
			{
				printf("enter name which you want to modify");
				scanf(" %[^\n]s",name);
				strcpy((v+i)->name,name);

			}
			else 
			printf("invalid choice");

		}

		if(i==cnt)
		{
			printf("data not found");return;
		}
	}
	fp=fopen("student_database","w");
	fwrite(v,sizeof(struct student),cnt,fp);
	printf("record successfully updated......\n");
	fclose(fp);

}
void add_record(void)
{
	struct student *v;
	printf("\nenter your roll no.: ");
	scanf(" %d",&v->roll);
	//if related data base available than send msg//do it later
	printf("\nenter your marks: ");
	scanf(" %f",&v->mark);
	printf("enter your name:");
	scanf(" %[^\n]s",v->name);
	printf("enter ur DOB:day/month/year");
	scanf(" %d%d%d",(v->date.day),(v->date.month),(v->date.year));
	fp=fopen("student_database","a");
	//not use "w" mode bcoz it will create new file every time//
	fwrite(&v,sizeof(v),1,fp);
	printf("record successfully added......\n");
	fclose(fp);
	return;
}
void print_record(void)
{
	int index=0;
	struct student *p;
	fp=fopen("student_database","r");
	printf("index.\t roll no \t marks\t\t name\n");
	printf("-----------------------------------------------\n");
	while(fread(&p,sizeof(p),1,fp))
	{
		index++;
		printf("%d \t %2d \t\t %0.2f\t\t %s %d%d%d\n",index,p->roll,p->mark,p->name,(p->date.day),(p->date.month),(p->date.year));

	}
	printf("---------------------------------------------------\n");
	printf("record successfully printed.....\n");
	fclose(fp);
}
void delete_record(void)
{
	struct student *v;
	int size,cnt,r,i;
	FILE *fp;
	fp=fopen("student_database","r");
	fseek(fp,0,2);
	size=ftell(fp);
	cnt=((size)/(sizeof(struct student)));
	rewind(fp);
	v=calloc(cnt,sizeof(struct student));
	fread(v,sizeof(struct student),cnt,fp);
	fclose(fp);
	////////////////////////
	//entire data file brought to dynamic array
	////////////////////
	printf("enter roll no.so that data to be delete");
	scanf(" %d",&r);
	for(i=0;i<cnt;i++)
	{
		if((v+i)->roll==r)
			break;
	}
		if(i==cnt)
		{
			printf("data not found");return;
		}
		memmove(v+i,v+i+1,(cnt-i-1)*sizeof(struct student));

		fp=fopen("student_database","w");
		fwrite(v,sizeof(struct student),cnt-1,fp);
		
		fclose(fp);

	
		printf("record successfully deleted....\n");
}

