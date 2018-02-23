#include <stdio.h>
#include <math.h>
//output prime number in 100
void main()
{
	int n,flag,i,k,num=0;
	for(n=2;n<=100;n=n++)
	{
		k=sqrt(n);    //
		flag=1;
		for(i=2;i<=k;i++)
			if(n%i==0)
			{
				flag=0;
				break;
			}
		if(flag)
		{
			printf("%5d",n);
			num=num+1;
		}
		if(num%5==0)
			printf("\n");

	}




		
}
	