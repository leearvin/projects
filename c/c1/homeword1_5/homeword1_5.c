#include<stdio.h>

void main()
{
	int a=10;
	int b=30;
	int c=20;
	int max;
	if (a>=b)
		{max=a;}
	else
		{max=b;}
	if(max<=c)
		max=c;
	printf("tha max of three numbers is %d", max);
}