#include"headers.c"
//void ISR(int n)
//{
//printf("in isr\n");
//signal(SIG_HUP,SIG_IGN);
//}
main()
{
if(fork())
{
signal(SIGHUP,SIG_IGN);
printf("child executing\n");
while(1);
}
else
{
printf("parent  executing\n");
while(1);
}
}
