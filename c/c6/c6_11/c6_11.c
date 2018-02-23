#include <stdio.h>
void main()
{
	char string[]="Beijing Olympics";
	int i;
	for(i=0;string[i]!='\0';i++)
		printf("%c",string[i]);
	printf("\n");
	printf("%s",string);
}