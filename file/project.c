#include"headers.h"
main()
{
	char choice;
	while(1)
	{
		printf("******STUDENT RECORD MANU*******\n");
		printf("a/A :add new record\n");
		printf("d/D :delete a record\n");
		printf("s/S :show the list\n");
		printf("m/M :modify a record\n");
		printf("v/V :save\n");
		printf("e/E :exit\n");
		printf("t/T :sort the list\n");
		printf("l/L :delete all record\n");
		printf("r/R :reverse the list\n");
		printf("enter your choice\n");
		scanf("%c",&choice);
		switch(choice)
		{
			case'a':
			case'A':add();break;
			case'd':
			case'D':delete();break;
			case's':
			case'S':show();break;
			case'm':
			case'M':modify();break;
			case'v':
			case'V':save();break;
			case'e':
			case'E':exit();break;
			case't':
			case'T':sort();break;
			case'l':
			case'L':delete_all();break;
			case'r':
			case'R':reverse();break;
			default:
				printf("invalid choice");break;
		}//switch

	}//while
}//main
