#include<stdio.h>
int main(int argc,char **argv)
{
	char ch='y';
	FILE *ptr1,*ptr2;
	if(argc==2)
	{
		printf("target missing\n");
		return;
	}
	ptr1=fopen(argv[1],"r");
	if(ptr2=fopen(argv[2],"r"))
	{
		fclose(ptr2);
		printf("target existing\n");
		printf("do you want to continue\n1.y\n2.n\n");
		scanf("%c",&ch);
	}
	if(ch=='y')
	{
		ptr2=fopen(argv[2],"w");
		while((ch=fgetc(ptr1))!=EOF)
			fputc(ch,ptr2);
		fclose(ptr2);
	}
	fclose(ptr1);
	remove(argv[1]);
}
