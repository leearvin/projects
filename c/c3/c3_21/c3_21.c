#include <stdio.h>
//Input three numbers
//output max and min.
void main()
{
	int a,b,c,max,min;
	printf("Input three integer numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		{max=a;min=b;}
	else
		{max=b,min=a;}
	if(max<c)
		{max=c;}
	else if(min>c)
		{min=c;}
	printf("max=%d,min=%d",max,min);
	
		
}