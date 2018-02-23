#include <stdio.h>
//Input two number.
//Output Max 
void main()
{
	int a,b,max;
	printf("Input two numbers:\n");
	scanf("%d%d",&a,&b);
	if(a>b) max=a;
	else max=b;
	printf("max=%d\n",max);
}