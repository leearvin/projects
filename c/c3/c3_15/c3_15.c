#include <stdio.h>
//Input a character, Judge if it is a lowercase or uppercase character or a digital or control character or other character.
//Output Max 
void main()
{
	int c;
	printf("Input a  character:\n");
	c=getchar();
	if(c<32)
		printf("This is a control character.\n");
	else if(c>='0'&&c<='9')
		printf("This is a number.\n");
	else if(c>='A'&&c<='Z')
		printf("This is a uppercase character.\n");
	else if(c>='a'&&c<='z')
		printf("This is a lowercase character.\n");
	else
		printf("This is an other character.\n");

	
}