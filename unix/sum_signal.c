#include"headers.c"
main(int argc,char **argv)
{
int a;
if(fork())
{
printf("parent is executing\n");
wait(&a);
a>>=8;
printf("sum:=%d\n",a);
}
else
{
	printf("child is executing\n");
	exit(atoi(argv[1])+atoi(argv[2]));
}}
