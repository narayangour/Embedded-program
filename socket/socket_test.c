#include"headers.h"
main(int argc,char **argv)
{
	int sfd;
	if(argc<2)
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
	printf("socket successfully created....\n");
	struct sockaddr_in myaddr;
	myaddr.sin_family=AF_INET;
	myaddr.sin_port=htons(atoi(argv[1]));
	myaddr.sin_addr.s_addr=inet_addr("0.0.0.0");
	
	if(bind(sfd,(const struct sockaddr*)&myaddr,sizeof(myaddr))<0)
	{
		perror("bind");
		exit(0);
	}
	printf("binding success........\n");

	if(listen(sfd,1)<0)
	{
		perror("listen");exit(0);
	}
	printf("listen success...........\n");

	while(1)
	{
		struct sockaddr_in caddr;
		int cfd,clen=sizeof(caddr);
		cfd=accept(sfd,(struct sockaddr*)&caddr,&clen);
		if(cfd<0)
		{
			perror("accept");exit(0);
		}
		printf("connection accepted......\n");
		char *ip=(char*)inet_ntoa(caddr.sin_addr);
		unsigned short portno=ntohs(caddr.sin_port);
		while(1)
		{
			int status;
			char buff[100];
			status=recv(cfd,buff,100,0);
			if(status<0)
			{
				perror("recv");
				break;
			}
			if(status==0)
			{
				perror("to be observed\n");
				break;
			}
			printf("recv msg: \n",buff);
			bzero(buff,100);
			printf("enter msg to sent to server\n");
			gets(buff);
			status=send(cfd,buff,100,0);
			if(status<0)
			{
				perror("send");break;
			}
			if(status==0)
			{
				perror("to be observed\n");
				break;
			}
			printf("server sent:: %s",buff);
		}


	}





}
