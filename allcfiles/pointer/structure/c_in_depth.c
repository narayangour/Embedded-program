#include<stdio.h>
#include<stdlib.h>
/*/////////////////////////////////////////////
o/p- 80 A
*///////////////////////////////////////////////
int main(void)
{
	struct 
	{
		int marks;
		char grade;
	}B1,A1;


//	struct result *A1,*B1;
	A1.marks=80;
	A1.grade='A';
	B1=A1;
	printf("%u %u\n",B1,A1);
	printf("%u %u\n",&B1,&A1);

	printf("marks=%d\t",B1.marks);
	printf("grade=%c\n",B1.grade);
	return 0;
}/*
////////////////////////////////////////////////////
o/p- monali 93 
////////////////////////////////////////
int main(void)
{
	struct rec 
	{
		char *name;
		int age;
	}*ptr;
	char name[10]="monali";///new array which hold base address//
	ptr=(struct rec *)malloc(sizeof(struct rec));//allocating mem 8byte
	ptr->name=name;//ptr pointing to name(which also a pointer variable)
so it can hold the base address///
	ptr->age=93;
	printf("%s\t",ptr->name);
	printf("%d",ptr->age);
	return 0;
/
///////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int age;
};
int main(void)
{
	struct student stu1={"anita",10},stu2={"anita",12};
	if(stu1==stu2)
		printf("same\n");
	else
		printf("not same\n");
	return 0;
}


*/













