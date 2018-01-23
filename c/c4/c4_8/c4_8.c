#include <stdio.h>
#include <string.h>
//Input a string, output how many letters,blanks,numbers and other characters in it.

void main()
{
	char str[80];
	int i,n1=0,n2=0,n3=0,n4=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='z')
			n1++;
		else if(str[i]==' ')
			n2++;
		else if(str[i]>='0'&&str[i]<='9')
			n3++;
		else
			n4++;
		printf("letters:%d,blanks:%d,numbers:%d,other characters:%d\n",n1,n2,n3,n4);
}
