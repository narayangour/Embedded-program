#include"headers.h"
extern NODE *head;
void save(void)
{
	FILE *fp;
	NODE *temp=head;
	char choice;
	printf("enter\nS/s:save and exit\n");
	printf("E/e:exit without saving\n");
	scanf(" %c",&choice);
	if(choice=='s')
	{
		fp=fopen("student_dat","w");
		if(fp==NULL)
		{
			printf("no data have ,,,to write into file \n");
			return;
		}
		temp=head;
		while(temp)
		{
			fwrite(temp,sizeof(NODE),1,fp);
			temp=temp->link;
		}
		fclose(fp);
		printf("data successfully saved\n");
		return;
	}
	if(choice=='e')
	return;
	
}

