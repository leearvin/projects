#include <stdio.h>

//output the sum of 1 to 200.
void main()
{
	int i,sum=0;
	for(i=1;i<=200;i++)
	{
		sum+=i;
		//printf("%d %d \n",i,sum);
	}
	printf("The sum of 1 to 200 is %d\n",sum);
}