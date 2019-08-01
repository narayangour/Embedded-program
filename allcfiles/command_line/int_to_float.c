#include<stdio.h>
#include<string.h>
#include<math.h>
float a_to_i(char *);
int main(int argc,char **argv)
{
	int i;
	float sum;
	sum=a_to_i(argv[1]);
	for(i=2;i<argc;i++)
	{
		sum=sum+a_to_i(argv[i]);
	}
	printf("\n %f\n",sum);
}
float a_to_i(char *p)
{
	float m=0;
	int i,flag=0,flag1=0,diviser=1;
	for(i=0;p[i];i++)
	{
		if(p[i]=='.')
		{
			flag1=1;
			continue;
		}

		if(p[i]=='-')
		{
			flag=1;
			continue;
		}
		if(p[i]=='+')
			continue;
		
		m*=10;
		m+=(p[i]-48);	
			
		if(flag1)			
			diviser*=10;
	}
	if(flag)
		return -m/diviser;
	return m/diviser;

}
