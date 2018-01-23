#include <stdio.h>
//bubble sort,compare the 2 adjacent numbers and put the smaller number in front.
void main()
{
	int x[10];
	int i,j,s;
	printf("Pls. input 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\n");
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(x[j]>x[j+1])
			{
				s=x[j];
				x[j]=x[j+1];
				x[j+1]=s;
			}
			printf("The result of bubble sort is:\n ");
	for(i=0;i<10;i++)
	{
		printf("% d",x[i]);
	}
	
}