#include<termios.h>
#include"headers.h"
main(int argc,char**argv)
{
/*setsockopt= is allow to modify default value....
//remove "adrees already in use"error msg....
//this has to be put between socket and bind bcoz mapping is done through 
//bind ...so to get used address ...i need to put it before bind that it can 
// remapped......

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
	puts("press system no...which you want to off...\n");

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
//     now we need to read data through
/*	int nfd;
	char temp;
	struct termios v;
 
	nfd=open("/dev/ttyS0",O_RDWR);
	if(nfd<0)
	{
		perror("open");
		exit(0);
	}
	v.c_iflag=IGNPAR;
	v.c_cflag=CS8|CREAD|CLOCAL|B9600;
	v.c_cc[VMIN]=1;

	if(tcsetattr(nfd,TCSANOW,&v)<0)
	{
		perror("tcsetattr");
		exit(0);
	}
	while(1)
	{
	read(nfd,&temp,sizeof(temp)); 	
	printf("charactor received =%c\n",temp);
	if(temp=='1')
	break;
	}*/
	///////////////////////////////////////////////////////////////
	char buf[100],ch=0;
	int status;
//////////////////////////////////////////////////////////////
//now i want to connect multiple client so i need to introduce fork
	while(1)
	{	
	printf("enter the character\n");
	scanf(" %c",&ch);

		if(ch=='1')
		{
			status=send(cfd,"halt",8,0);
			close(cfd);
			break;
		} 
		else
		{
			printf("enter valid system no...\n");
			printf("you enter %c\n",ch);
			break;
		}
	}
}
}
