#include<stdio.h>
main()
{
int i,bit;
char *ch=&i;
printf("enter");
scanf("%d",&i);
for(bit=31;bit>=0;bit--)
{
 printf("%d",(i>>bit)&1);
if((i%8==0))
printf(" ");
}
if((*ch)==1)
printf("little\n");
else
printf("big\n");

for(bit=31;bit>=0;bit--)
{
 printf("%d",(i>>bit)&1);
if((i%8==0))
printf(" ");
}
}

