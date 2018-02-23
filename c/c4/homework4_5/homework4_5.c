#include <stdio.h>
//Output the first 20 items of Array Fibonacci. 

void main()
{
	int i,x[20];
	x[0]=1;
	x[1]=1;
	for(i=0;i<20;i++)
	{
		if(i>=2)
			x[i]=x[i-1]+x[i-2];
		printf("x[%d]:%d\n",i,x[i]);
	}
	

}