#include"headers.c"
main()
{
	if(fork())
	{
	if(fork())
		{
			{		
				printf(" parent executing\n");
				}
			while(1);
		}
	}
	else
	{
		printf("child  executing\n");
		while(1);
	}
}
