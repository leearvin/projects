#include <stdio.h>
#define N 4
long Fibonacci(int n)
{
	int x;
	long s;
	x=n;
	switch(x)
	{
	case 0:
		s=0;
		break;
	case 1:
		s=1;
		break;
	default:
		s=Fibonacci(n-1)+Fibonacci(n-2);
	}
	return s;
}
void main()
{
	printf("The sum of the first thirty items of the Fibonacci sequence is %d \n",Fibonacci(N));
}