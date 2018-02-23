#include <stdio.h>
//Input two number.
//Compare the size of 2 numbers
void main()
{
	int a,b;
	printf("Input two numbers a&b:\n");
	scanf("%d%d",&a,&b);
	if(a!=b)
		if(a>b) printf("a>b");
		else printf("a<b");
	else
		printf("a=b");
		
}