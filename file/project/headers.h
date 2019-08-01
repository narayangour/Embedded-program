#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
			{
			int roll;
			float per;
			char name[30];
			struct student *link;
			}NODE;

