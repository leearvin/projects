#include <stdio.h>
//output the sum of popsitive integer inputted.
void main()
{
	int n,i,sum=0;
	for(i=1;i<=10;i++)
	{
		printf("Pls. input a positive integer:\n");
		scanf("%d",&n);
		if(n<=0)
			continue;
		sum=sum+n;
	}
	
	printf("the sum of integer is %d \n",sum);

}