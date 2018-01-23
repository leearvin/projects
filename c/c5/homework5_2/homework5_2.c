#include <stdio.h>

long factorial(int n)
{
	
	long f=1;
	if(n==0)
		return 1;
	f=n*factorial(n-1);
	return f;
}

void main()
{
	int i;
	long sum=0;
	for(i=6;i<=8;i++)
	{
		
		sum+=factorial(i);
		printf("333\n");
		
	}
	printf("the sum is %ld.\n",sum);
}