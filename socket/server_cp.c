#include"headers.h"
main(int argc,char**argv)
{
//setsockopt= is allow to modify default value....
//remove "adrees already in use"error msg....
//this has to be put between socket and bind bcoz mapping is done through 
//bind ...so to get used address ...i need to put it before bind that it can 
// remapped......
/*
int enablesockopt=1;
if(setsockopt(sfd,SOL_SOCKET,SO_REUSEADDR,4)<0)  
 //last argument directly given 4 ..bcoz w r taking int...
//SOL_SOCKET..bcoz w r changing at socket level...
{
	perror("setsockopt");
	exit(0);
}
	puts("setsock opt success\n ");
*/

struct sockaddr_in myaddr;
int sfd;
if(argc<2)
{
	printf("input format \n");
	printf("server exicutable well known port no\n");			exit(0);
}
printf("creating server socket\n");

sfd=socket(AF_INET,SOCK_STREAM,0);
if(sfd<0)
{
	perror("socket");exit(0);
}
/////////////////////////////////////////////////////////
int enablesockopt=1;
if(setsockopt(sfd,SOL_SOCKET,SO_REUSEADDR,&enablesockopt,sizeof(enablesockopt))<0)  
	//last argument directly given 4 ..bcoz w r taking int...
	//SOL_SOCKET..bcoz w r changing at socket level...
{
	perror("setsockopt");
	exit(0);
}
puts("setsock opt success\n ");

/////////////////////////////////////////////////////////
		// now i m going to bind...
myaddr.sin_family=AF_INET;	
myaddr.sin_port=htons(atoi(argv[1]));	
myaddr.sin_addr.s_addr=inet_addr("0.0.0.0");
puts("bind\n");
if(bind(sfd,(const struct sockaddr*)&myaddr,sizeof(myaddr))<0)
{
	perror("bind");
	exit(0);
}	
puts("binds success\n");
puts("creating connection queue\n");
	//////////////////////////////////////////////////	

if(listen(sfd,1)<0)     ///in listen how many req can entertain at pt of time
{	
	perror("listen");
	exit(0);
}
puts("listen success\n");
///////////////////////////////////////////////////////////////
while(1)
{
	int cfd,clen;
	struct sockaddr_in caddr;          //in this struct ip,port no,variable are present

	clen=sizeof(caddr);
	puts("waiting to accept from client\n");

	cfd=accept(sfd,(struct sockaddr*)&caddr,&clen);   //it extract connection req from queue

	if(cfd<0)
	{	
		perror("accept");
		exit(0);
	}

	printf("connection accepted from client\n");
		////////////////////////////////////////////////////////////////////////////////////////
	
	char *ip=(char *)inet_ntoa(caddr.sin_addr);
	unsigned short portno=ntohs(caddr.sin_port);
	printf("whose ip is...:%s\n",ip);	
	printf("ephemeral port no is...:%d\n",portno);	
	printf("file descripter is...:%d\n",cfd);	
//////////////////////////////////////////////////////////////////////////////
	
	
	
	
	
////////////////////////////////////////////////////////////////
	char buf[100];
	int status;
//////////////////////////////////////////////////////////////
//now i want to connect multiple client so i need to introduce fork
	while(1)
	{
		printf("enter msg to send to client\n");
		gets(buf);
		status=send(cfd,buf,100,0);
		if(status<0)
		{
			perror("send");
			close(cfd);
			break;
		}
		printf("server sent:%s\n",buf);
	}
}

