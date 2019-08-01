#include"headers.h"
main(int argc,char **argv)
{
	int sfd;
	if(argc!=3)
	{
		printf("provide proper argument\n");
		exit(0);
	}
	printf("creating server socket......\n");
	sfd=socket(AF_INET,SOCK_STREAM,0);
	if(sfd<0)
	{
		perror("socket");
		exit(0);
	}
	printf("socket successfully created..%d..\n",sfd);

	
	struct sockaddr_in myaddr;


	myaddr.sin_family=AF_INET;
	myaddr.sin_port=htons(atoi(argv[1]));
	myaddr.sin_addr.s_addr=inet_addr(argv[2]);
	printf("bind and connect..........\n");
while(1)
	{
		struct sockaddr_in caddr;
		int cfd,clen=sizeof(caddr);
		connect(sfd,(struct sockaddr*)&caddr,clen);
		if(sfd<0)
		{
			perror("connect");exit(0);
		}
		printf("connection success......\n");
		char *ip=(char*)inet_ntoa(caddr.sin_addr);
		unsigned short portno=ntohs(caddr.sin_port);
		while(1)
		{
			int status;
			char buff[100];
			bzero(buff,100);
			printf("enter msg to sent to server\n");
			gets(buff);
			
			status=send(sfd,buff,sizeof(buff),0);
			printf("**********%d************",cfd);

			if(status<0)
			{
				perror("send");break;
			}
			if(status==0)
			{
				printf("to be observed\n");
				break;
			}
			printf("server sent:: %s",buff);	
			bzero(buff,100);
			status=recv(sfd,buff,sizeof(buff),0);
			if(status<0)
			{
				perror("recv");
				break;
			}
			if(status==0)
			{
				printf("to be observed\n");
				break;
			}
			printf("recv msg: \n",buff);
			bzero(buff,100);

		}


	}





}
