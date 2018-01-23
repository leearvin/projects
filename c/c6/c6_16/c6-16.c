#include <stdio.h>
void main()
{
	void string_catenate(char *from,char *to);  //÷∏’Î–Œ≤Œ
	char string1[30]="Computer ";
	char string2[]="language";
	printf("string1=%s\nstring2=%s\n",string1,string2);
	printf("catenate string2 to string1:\n");
	string_catenate(string1,string2);
	printf("String1 is %s\n",string1);
}

void string_catenate(char *from,char *to)
{
	for(;*from!='\0';from++);
	for(;*to!='\0';to++,from++)
		*from=*to;
	
	*from='\0';
}