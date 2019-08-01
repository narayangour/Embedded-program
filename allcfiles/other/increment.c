#include<stdio.h>
//without scan compiler behave like volatile type so its give different output..supposed if w r not using scan than it will give different output//
main()
{
int i,l;
printf("enter a no;");
scanf("%d",&l);
i=l;
printf("%d %d %d %d %d\n",i,i++,++i,i++,i);
}
