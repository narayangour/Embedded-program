/////////////////////////////////////////////////////////////////////////
//it will print all the character of file  that mean as it is printing
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
main()
{
char read[20],ch;
FILE *ptr;
puts("enter file name to open:");
gets(read);
ptr=fopen(read,"r");
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
