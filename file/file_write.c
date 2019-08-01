/////////////////////////////////////////////////////////////////////////
//it will print all the character of file  that mean as it is printing
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
main(int argc,char** argv)
{
char ch;
FILE *ptr;
if(argc!=2)
{
printf("ERROR: usage ./rd<filename>:");
return;
}
ptr=fopen(argv[1],"r");
if(ptr==NULL)
{
printf("EROOR: file not found\n");
return;
}
while((ch=fgetc(ptr))!=EOF)
{
printf("%c",ch);
}
fclose(ptr);
}
