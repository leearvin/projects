#include <stdio.h>
//a fractional series (2/1 3/2 5/3 8/5 13/8 21/13),output the sum of the first 30 of this fractional series.

void main()
{
	int i, m,n,sum;
	float total;
	m=1;
	n=1;
	sum=0;
	total=0;
	for(i=1;i<=30;i++)
	{
		sum=m+n;
		m=n;
		n=sum;
		total =total +(float)n/m;
		printf("%d %d/%d %f\n",i,n,m,total);
		
		
	}
}