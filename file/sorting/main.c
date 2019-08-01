#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 1000
main()
{
	long long int i,j,n,temp,a[N],b;
	char ch;
	srand(getpid());
	for(i=1;i<=N;i++)
	{
		n=(rand()%N+10);
		for(j=0;j<i;j++)
		{	

			if(a[j]==n)
			{
				i--;break;
			}
		}
		if(j==i)
		{
			a[i-1]=n;
		}
	}
	printf("before sorting\n");
	for(i=0;i<N;i++)
		printf(" %d\t",a[i]);
	while(1)
	{	
		printf("\n---------------------------------------------\n");
		printf("\t\t\tselect sorting tech:\n");
		printf("\t\t\ts:selection\n");
		printf("\t\t\ti:insertion\n");
		printf("\t\t\tm:merge\n");
		printf("\t\t\th:heap\n");
		printf("\t\t\te:exit\n");
		printf("\t\t\tselect choice:\n");
		printf("\n---------------------------------------------\n");
		scanf(" %c",&ch);
		switch(ch)
		{
			case's':selection(a,N);
				printf("\n after selection sorting\n");
				for(i=0;i<N;i++)
					printf(" %d\t",a[i]);
		printf("\n---------------------------------------------\n");
				break;
			case'i':
				insertion(a,N);
				printf("\nafter insertion sorting\n");
				for(i=0;i<N;i++)
					printf(" %d\t",a[i]);
		printf("\n---------------------------------------------\n");
				break;
			case'h':
				heap(a,N);
				printf("\nafter  heap sorting\n");
				for(i=0;i<N;i++)
					printf(" %d\t",a[i]);
		printf("\n---------------------------------------------\n");
				break;
			case'm':
				merge(a,N);
				printf("\nafter merge sorting\n");
				for(i=0;i<N;i++)
					printf(" %d\t",a[i]);
		printf("\n---------------------------------------------\n");
				break;
			case'e':
				exit(0);
			default:printf("enter valid choice\n");
		}

	}
}
