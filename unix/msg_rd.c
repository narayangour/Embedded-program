#include<sys/msg.h>
#include<sys/ipc.h>
#include"headers.c"
struct msgbuf
{
	long int mtype;
	char mtext[20];
};
main()
{
	int id;
	struct msgbuf buf;
	id=msgget(1,IPC_CREAT|0660);
	if(id==-1){perror("msgget");return;}
	printf("MQ id =%d",id);
	printf("pendingon mq\n");
	bzero(buf.mtext,20);
	if(msgrcv(id,&buf,20,buf.mtype,0)==-1)
	{
		perror("msgrcv");return;
	}
	printf("msg:%s\n",buf.mtext);
}
