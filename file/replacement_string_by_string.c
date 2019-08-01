#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char **argv)
                          {
	char *buf,*ptr,s1[20],s2[20];
	char str[100];
	FILE *fp;
	int size,n,l1,index,l2,i;

	l1=strlen(argv[1]);
	l2=strlen(argv[2]);

	fp=fopen(argv[3],"r");

	fseek(fp,0,2);
	size=ftell(fp)+1;
	buf=calloc(1,size);
	printf("%d",size);
	rewind(fp);/////fseek(fp,0,0)

	fread(buf,size-1,1,fp);
	puts(buf);

	fclose(fp);
	strcpy(s1,argv[1]);
	strcpy(s2,argv[2]);
	ptr=buf;
/*	while(ptr=strstr(ptr,s1))
	{
	if(l2>l1)
		n=l2-l1;
	else if(l1>l2)
		n=l1-l2;
	else 
		n=0;
		size=size+n;
		index=ptr-buf;
		buf=realloc(buf,size);
		ptr=buf+index;
		memmove(ptr+l2,ptr+l1,strlen(ptr+l1)-1);                 
		memmove(ptr,s2,l2);
		ptr=ptr+l2;
	}*/
	while(ptr=strstr(ptr,s1))
	{
		size=size+(l2-l1);
		buf=realloc(buf,size);
		memmove(ptr+l2,ptr+l1,strlen(ptr+l1)+1);                 
		memmove(ptr,s2,l2);
		ptr=ptr+l2;
	}
	fp=fopen(argv[3],"w");
	i=0;
	while(buf[i]!='\0')
	{
	fputc(buf[i],fp);
	i++;
	}
	fclose(fp);
}
