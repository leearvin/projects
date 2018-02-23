#include <stdio.h>
//Input two number.
//Output Max 
void main()
{
	int a,b;
	printf("Input two numbers:\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("max=%d\n",a);
	else 
		printf("max=%d\n",b);
}