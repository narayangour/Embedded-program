#include <RTL.h> 

OS_TID id1, id2;
unsigned int count1=0,count2=0;
__task void task1 (void);
__task void task2 (void);

__task void task1 (void) 
{
  id1 = os_tsk_self ();
  id2 = os_tsk_create (task2, 1);
  for (;;) 
	{
		count1++;
	}
}

__task void task2 (void) 
{
  for (;;) 
	{
		count2++;
   }
}

int main (void)
{
  os_sys_init (task1);
}
