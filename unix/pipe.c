#include"headers.c"
main(int argc,char**argv)
{
int fd1,fd2,p[2];

char ch;

fd1=open(argv[1],,O_RDONLY);



close(1);
dup(p[1]);
close(p[0]);
execlp("nm","nm",NULL);
close(0);
dup

close(fd1);
close(fd2);

}

