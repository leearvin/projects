#include <stdio.h>
//output first 20 digits of Fibonacci
void main()
{
	long a=1,b=1,c;
	int i;
	printf("% 15ld% 15ld",a,b);
	for(i=3;i<=20;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("% 15ld",c);
		if(i% 5==0)
			printf("\n");
	}




		
}
	