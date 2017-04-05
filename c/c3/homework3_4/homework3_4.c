#include <stdio.h>
//inpute a character, judge if it is a uppercase character, convert to lowercase characters if it's ,
void main()
{
	char c;
	printf("Input a Uppercase Character:");
	c=getchar();
	if('A'<=c&&c<='Z')
		printf("The lowercase character is %c\n",c+32);
	else
		printf("What you inputted is not a Uppercase character.\n");
}