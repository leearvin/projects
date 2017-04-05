#include <stdio.h>
void main()
{
	void string_catenate(char from[],char to[]);
	char string1[30]="Computer ";
	char string2[]="language";
	printf("string1=%s\nstring2=%s\n",string1,string2);
	printf("catenate string2 to string1:\n");
	string_catenate(string1,string2);
	printf("String1 is %s\n",string1);
}

void string_catenate(char from[],char to[])
{
	int i=0,j=0;
	while(from[i]!='\0')
		i++;
	while(to[j]!='\0')
	{
		from[i]=to[j];
		i++;
		j++;
	}
	from[i]='\0';
}