#include<stdio.h>
#include<string.h>
void reversestr(char str[]);
void reverse(char str[],int start,int end);
int main(void)
{
char str[50];
strcpy(str,"i have many books");
reversestr(str);
puts(str);
reverse(str,0,4);
puts(str);
return 0;
}
void reversestr(char str[])
{
int i,j;
char temp;
for(i=0,j=strlen(str)-1;i<=j;i++,j--)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
}
void reverse(char str[],int start,int end)
{
char temp;
while(start<=end)
{
temp=str[start];
str[start]=str[end];
str[end]=temp;
start++;
end--;
}
}
