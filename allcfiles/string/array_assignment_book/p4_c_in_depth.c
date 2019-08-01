#include<stdio.h>
#include<string.h>
void reverse(char str[],int start, int end);
void reverse_letters(char str[],int start,int end);
int main(void)
{
char str[50];
strcpy(str,"i have many books");
reverse_letters(str,0,strlen(str)-1);
puts(str);
return 0;
}
void reverse_letters(char str[],int start,int end)
{
int i,j;char temp;
int w_start,w_end;
for()
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
