#include <stdio.h>

long f(int n);
void main()
{
	int n;
	printf("Input n:\n");
	scanf("%d",&n);
	f(n);
	
}
long f(int n)
{
	long a;
	if(n==1)
	{
		printf("1\n");
		return 1;
	}
	a=f(n-1)+n*n;
	printf("%d\n",a);
	return a;

}
