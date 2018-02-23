#include <stdio.h>
//count how many characters is in the string.
int isalp(char c)
{
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		return (1);
	else
		return (0);
}

void main()
{
	int i,num=0;
	char str[255];
	printf("Input a string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
		if(isalp(str[i]))
			num++;
	puts(str);
	printf("num=%d\n",num);
}