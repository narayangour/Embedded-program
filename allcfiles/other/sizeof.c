#include<stdio.h>
main()
{
 int i=56,g;
double k=5000000;
char c='c',b;
float f=1.0;
int n;
n=sizeof(char);
printf("c=%d\n",n);

n=sizeof(c);
printf("c=%d\n",n);

n=sizeof('c');
printf("d=%d\n",n);

n=sizeof(i);
printf("d=%d\n",n);

n=sizeof(double);
printf("d=%d\n",n);

n=sizeof("A");
printf("d=%d\n",n);

n=sizeof("vector");
printf("d=%d\n",n);
}
