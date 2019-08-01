#include"headers.h"
main(int argc,char**argv)
{
	struct sockaddr_in myaddr;
	int fd;
	if(argc<3)
	{
		printf("input format: \n");
		printf(" client exicutable server_port_no server_ip_address\n");			
	exit(0);
	}
	printf("creating client socket\n");

	fd=socket(AF_INET,SOCK_STREAM,0);
	if(fd<0)
	{
		perror("socket");exit(0);
	}
/////////////////////////////////////////////////////////
		// now i m going to bind...
	myaddr.sin_family=AF_INET;	
	myaddr.sin_port=htons(atoi(argv[1]));	
	myaddr.sin_addr.s_addr=inet_addr(argv[2]);
	puts("bind and connect\n");
	///connect initiate a connection on socket.....
	connect(fd,(struct sockaddr*)&myaddr,sizeof(myaddr));
	if(fd<0)
	{
		perror("connect");
		exit(0);
	}	
	puts("connected\n");
	///////////////////////////////////////////////////////////////
	char buf[100];
	int status;
	while(1)
	{	
		
		printf("client waiting 4 msg\n");
		bzero(buf,100);
		status=recv(fd,buf,100,0);
		if(status<0)
		{
			perror("recv");break;
		}
		if(status==0)
		{
			printf("to be observed\n");
			break;
		
		}
		if(strcmp(buf,"halt")==0)
		{
		printf("client rcv:%s\n",buf);
		puts("\nterminating connection with server willingly\n");
		system("halt");
		break;
		}
	}
	close(fd);
}

