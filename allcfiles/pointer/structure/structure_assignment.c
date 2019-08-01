/*#include<stdio.h>
main()
{
struct emp 
	{
	char name[25];
	int age;
	float bs;
	};
	struct emp e;
	e.name="rahul";//incompitable assignment ..that means rahul is string and e.name is mem name so u can't assign string to name
	e.age=25;
	printf("%s %d",e.name,e.age);
	}
///////////////////////////////////////////////////////////////////////////
o/p-103 design
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
struct course 
		{
		int courseno;
		char coursename[25];	
		};
main()
		{
		struct course c[]={
				{102,"thermal"},
				{103,"manufacturing"},
				{104,"design"}
				};
		printf("%d",c[1].courseno);
		printf("%s",(*(c+2)).coursename);

}
/////////////////////////////////////////////////////////////
//o/p--1 2 2 ...for 1 sign and data bit are same which is 1...so it means -1....so ans is -1...but when w talk abt bit3 ..memory is 4bit so range to store is from -2^n to -(2^n)-1...so -8 to 7...so 2 is under this range so ans will come 2 2////////////////////////////////////////////////////////// 
#include<stdio.h>
main()
	{
	struct value
		{
		int bit1:1;
		int bit3:4;
		int bit4:4;
		}bit={1,2,2};
	printf("%d %d %d",bit.bit1,bit.bit3,bit.bit4);
}
////////////////////////////////////////////////////////////////
o/p-268 271 first initialize to c[0]=12 c[1]=1 than ch[0]=15 ch=[1] =1..in memory it will look like 12 1 15 1 but w are using short int for fatching so it will fatch first two byte from total and printf of binary equivalent so combinally binary of 12 1 is  0000 0001 0000 1100 which 268 similar with 15 1 it will print    271 ///////////////////////////////////////

//////////////////////
#include<stdio.h>
main()
	{
	union {
		struct	{
			char c[2];
			char ch[2];
			}s;
		struct
			{
			short int i;
			short int j;
			}st;
		}u={12,1,15,1};
	printf("%d %d",u.st.i,u.st.j);
	}
*/
///////////////////////////////////////////////////////////////////























