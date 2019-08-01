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

struct sockaddr_in saddr,caddr;
int sfd,cfd,result;
int slen,clen;
fd_set readfds,testfds;
if(argc!=2)
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
printf("server socket created successfully............\n");

/////////////////////////////////////////////////////////
puts("set socket option for :: address already in use\n");
int on=1;
if(setsockopt(sfd,SOL_SOCKET,SO_REUSEADDR,&on,4)<0)  
	//last argument directly given 4 ..bcoz w r taking int...
	//SOL_SOCKET..bcoz w r changing at socket level...
{
	perror("setsockopt");
	exit(0);
}
puts("setsock opt success\n ");

/////////////////////////////////////////////////////////
		// now i m going to bind...
saddr.sin_family=AF_INET;	
saddr.sin_port=htons(atoi(argv[1]));	
saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
puts("binding.............................\n");
if(bind(sfd,(const struct sockaddr*)&saddr,sizeof(saddr))<0)
{
	perror("bind");
	exit(0);
}	
puts("binds success\n");
puts("creating connection queue\n");
	//////////////////////////////////////////////////	

if(listen(sfd,3)<0)     ///in listen how many req can entertain at pt of time
{	
	perror("listen");
	exit(0);
}
puts("listen success\n");
///////////////////////////////////////////////////////////////
FD_ZERO(&readfds);
struct timeval tv={20,0};
int fd,nread;
while(1)
{
//	int cfd,clen;
//	struct sockaddr_in caddr;          //in this struct ip,port no,variable are present
	testfds=readfds;
	printf("server waiting for input from client whit in %d sec \n",(int)tv
			.tv_sec);
	result=select(0,&testfds,0,0,0);
	if(result<0)
	{
		perror("select");
		exit(0);
	}
	else if(result == 0)
	{
		puts("time out");
		exit(0);
	}
	for(fd=0;fd<10;fd++)
	{
		if(FD_ISSET(fd,&testfds))
		{
			if(fd==sdf)
			{
				clen=sizeof(caddr);
				cfd=accept(sfd,(struct sockaddr *)& caddr, &clen);
				if(cfd<0)
				{
					perror("accept");
					exit(0);
				}
				char *ip=(char*)inet_ntoa(caddr.sin_addr);
				unsigned short portno=ntohs(caddr.sin_port);
				printf("accepted client with ip %s\n",ip);
				printf("using port %d\n",portno);
				FD_SET(cfd,&readfds);
				printf("adding client on fd %d\n",cfd);
				
			}
			else
			{
			
			}
		}
	}
	////////////////////////////////
	////////////////////////////////////////
	////////////////////////////////////////////////
	//////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////
}
}
