

#include<stdio.h>
#include<string.h>
#include<math.h>
int a_to_i(char *);

int main(int argc, char **argv)
{
//	char ch;
	int i,sum;

            sum=a_to_i(argv[1]);
	//	n=a_to_i(argv1[1]) + a_to_i(argv1[3]);
	for(i=2;i<argc;i+=2)
	{
		if(argv[i][0]=='+')
			sum=sum + a_to_i(argv[i+1]);
		else if(argv[i][0]=='-')
			sum=sum - a_to_i(argv[i+1]);
		else if(argv[i][0]=='*')
			sum=sum * a_to_i(argv[i+1]);
		else 
			sum=sum / a_to_i(argv[i+1]);
	}
printf("%d\n",sum);
}
int a_to_i(char *p)
{
	int v=0,m,i,n;
	n=strlen(p);

		if(p[0]=='-')
		{
			for(i=1;p[i];i++)
	{
				m=((p[i]-48) * pow(10,n-i-1));
	
				v=v+m;
			}	
			v=-v;
			return v;
		}
		else if(p[0]=='+')
		{
			for(i=1;p[i];i++)
			{
				m=((p[i]-48) * pow(10,n-i-1));
	
				v=v+m;
			}	
			
			return v;
		}
		else
		{
			for(i=0;p[i];i++)
			{
				m=((p[i]-48) * pow(10,n-i-1));
	
				v=v+m;
			}	
			
			return v;
		}
			
				

}		
	

