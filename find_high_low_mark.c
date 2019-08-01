#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
int arr[5][5],i,j,sum=0,sum1=0,sum2=500,sum3=0,index,index_low,index_sub;
	for(i=0;i<5;i++)
	{
		sum=0;
		printf("enter student %d marks of five subject",i+1);
		for(j=0;j<5;j++)
		{
			scanf(" %d",&arr[i][j]);

			sum=sum+arr[i][j];
		}
		if(sum1<sum)///this condition for highest marks
		{
			sum1=sum;
			index=i;
		
		}
		if(sum2>sum)//this fo lowest marks
		{
		sum2=sum;
		index_low=i;
		}

	}
	printf("student %d has got max marks:%d\n ",index+1,sum1);
	printf("student %d has got min marks:%d \n",index_low+1,sum2);
	for(i=0;i<5;i++)
	{	sum=0;
		for(j=0;j<5;j++)
		{
			sum=sum+arr[j][i];
		}
		if(sum3<sum)
		{
			sum3=sum;
			index_sub=j;
		}
	}		
printf("subject %d has got max marks:%d \n",index_sub,sum3);

}
