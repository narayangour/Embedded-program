#include"headers.h"
NODE *head=NULL;
void refresh();
main()
{
	short int save_status=1; // 1 means saved 
	char choice,ch[20],cha;
	refresh();
	while(1)
	{	
		printf("\n-----------------------------------------\n");
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
		printf("-------------------------------------------\n");
		printf("enter your choice\n");
		printf("-------------------------------------------\n");
		scanf(" %s",ch);	
		if(strlen(ch)==1)
		{
		choice=ch[0];
		switch(choice)
		{	

			case'A':
			case'a':save_status=0;
			add();break;
			case'D':
			case'd':save_status=0;delete();break;
			case'S':
			case's':show();break;
			case'M':
			case'm':save_status=0;mod();break;
			case'V':
			case'v':save_status=1;save();break;
			case'E':
			case'e':
			if(save_status)		
				exit(0);
			
			printf("data not saved ....do you want to save\n");
			printf("1.y\n2.n\n");
			scanf(" %c",&cha);
			if(cha=='n')
			exit(0);
			break;
			case'T':
			case't':sort();break;
			case'L':
			case'l':del_all();break;
			case'R':
			case'r':reverse(head);break;
			default:
				printf("invalid choice\n");
			}
					
		}//switch	
			else 
			printf("plz enter only 1 char at time..that will be your choice\n");


	}//while
}//main
