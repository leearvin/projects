#include <stdio.h>
//×Ö·û´®µÄ¸´ÖÆ
void main()
{
	char string1[]="I am a teacher.",string2[20];
	char *p1,*p2;
	int i;
	p1=string1;
	p2=string2;
	for(;*p1!='\0';p1++,p2++)
		*p2=*p1;
	*p2='\0';
	printf("string1 is: %s\n",string1);
	printf("String2 is: ");
	for(i=0;string2[i]!='\0';i++)
		printf("%c",string2[i]);

}