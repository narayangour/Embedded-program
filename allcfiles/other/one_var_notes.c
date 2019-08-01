#include<stdio.h>
main()
{
unsigned long int n;
printf("enter an amout");
scanf("%lld",&n);
//notes=n/1000;
printf("no of 1000 rs notes is=%d\n",n/1000);
//c=c+notes;
n=n%1000;
//notes=n/500;
printf("no of 500 rs notes is =%d\n",n/500);
//c=c+notes;
n=n%500;
//notes=n/100;
printf("no of 100rs notes is %d\n",n/100);
//c=c+notes;
n=n%100;
//notes=n/50;
printf("no of 50rs notes is %d\n",n/50);
//c=c+notes;
n=n%50;
//notes=n/20;
printf("no of 20rs notes is %d\n",n/20);
//c=c+notes;
n=n%20;
//notes=n/10;
printf("no of 10rs notes is %d\n",n/10);
//c=c+notes;
n=n%10;
//notes=n/5;
printf("no of 5rs notes is %d\n",n/5);
//c=c+notes;
n=n%5;
//notes=n/2;
printf("no of 2rs coin is %d\n",n/2);
//c=c+notes;
n=n%2;
//notes=n/1;
printf("no of 1rs coin is %d\n",n/1);
}
