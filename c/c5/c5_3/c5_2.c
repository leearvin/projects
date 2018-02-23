#include <stdio.h>
//define a function for finding the larger of the 2 numbers.

int max(int n1,int n2);

void main()
{
	int num1,num2;
	printf("Pls. input two numbers:\n");
	scanf("%d %d",&num1,&num2);
	printf("max=%d\n",max(num1,num2));
}

int max(int n1,int n2)
{
	int n;
	n=n1>n2?n1:n2;
	return(n);
}