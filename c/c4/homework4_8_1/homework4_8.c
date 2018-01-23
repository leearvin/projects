#include <stdio.h>
#include <string.h>
//string1 + string 2 = string3

void main()
{
	int i,j;
	char c;
	char string3[300];
	char string1[100];
	char string2[100];
	printf("Pls. enter string1: \n");
	gets(string1);
	printf("Pls. enter string2: \n");
	gets(string2);
	
	for(i=0;(c=string1[i])!='\0';i++)
		string3[i]=string1[i];
	j=i; 
	for(i=0;(c=string2[i])!='\0';i++,j++)
		string3[j]=string2[i];
	string3[j]=string2[i];  //copy '\0' to the end of new string.
	printf("%s\n",string3);	
	getch();


}