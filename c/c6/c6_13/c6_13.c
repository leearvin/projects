#include <stdio.h>
//×Ö·û´®µÄ¸´ÖÆ
void main()
{
	char string1[]="I am a teacher.",string2[20];
	int i;
	for(i=0;*(string1+i)!='\0';i++)
		*(string2+i)=*(string1+i);
	*(string2+i)='\0';   //end of string
	printf("String1 is: %s\n",string1);
	printf("String2 is:");
	for(i=0;string2[i]!='\0';i++)
		printf("%c",string2[i]);

}