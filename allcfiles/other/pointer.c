#include<stdio.h>
main()
{
	int a[5][5] ;
	int i,j,rows,cols,s1=0,s2=0,s3=0,s4=0,s5=0;
	rows=sizeof(a)/sizeof(a[0]);
	cols=sizeof(a[0])/sizeof(a[0][0]);
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	for(i=0;i<rows;i++)
{	
	s1=s1+a[0][i];
}
	printf("%d",s1);
printf("\n");
	for(i=0;i<rows;i++)
{	
	s2=s2+a[1][i];
}
	printf("%d",s2);
printf("\n");
for(i=0;i<rows;i++)
{	
	s3=s3+a[2][i];
}
	printf("%d",s3);
printf("\n");
	for(i=0;i<rows;i++)	
{
	s4=s4+a[3][i];
	printf("%d",s4);
}
printf("\n");
}
	for(i=0;i<rows;i++)
{	
	s5=s5+a[4][i];
}
	printf("%d",s5);
printf("\n");
}