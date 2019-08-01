#include<stdio.h>
long int factorial(int n);
main()
{
long int fact=1,n;
printf("enter integer no");
scanf("%d",&n);
fact=factorial(n);
printf("factorial of no. is =%d",fact);
}
long int factorial(int n)
{
long int fact;
if (n>1)
{
fact=n*factorial(n-1);
return fact;
}
else 
{
printf("not valid..factorial is calcuate only on possitive number\n");
return 0;
}
}




