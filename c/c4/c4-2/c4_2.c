#include <stdio.h>
//input 10 numbers ,output the average number and more than it.
void main()
{
	int x[10],i;
	float sum=0,aver=0.0;
	printf("Pls. input 10 numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
		sum+=x[i];
	}

	aver = sum/10.0;

	printf("The average is %10.2f\n",aver);
	printf("Bigger than the average is :\n");

	
	for(i=0;i<10;i++)
	{
		if(x[i]>aver)
			printf("x[%d]=%d\n",i,x[i]);
	}
	
}