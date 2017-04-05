#include<stdio.h>

/*
	Define function sum,
	Calling function sum in function main.
*/

int sum(int x, int y)
{
	int z;
	z=x+y;
	return(z);
}

void main()
{
	int a,b,c;
	printf("Input the first number: ");
	scanf("%d",&a);
	printf("Input second number: ");
	scanf("%d",&b);
	c=sum(a,b);
	printf("sum=%d\n", c);
}