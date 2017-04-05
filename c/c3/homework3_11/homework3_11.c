#include <stdio.h>
//Output the sum of Factorial of 1 to 10.(1!+2!+3!...+10!)

void main()
{
	int i,j;
	long sum,product;
	sum=0;
	for(i=1;i<=10;i++)
	{
		product=1;
		for(j=1;j<=i;j++)
		{
			product*=j;
		}
		//printf("%d\n",product);
		sum+=product;
	}
	printf("The sum of Factorial of 1 to 10 is %d\n",sum);
}