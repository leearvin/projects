#include <stdio.h>
//The average score of five classes 
float aver(float a[])
{
	int i;
	float av,sum=0;
	for(i=0;i<5;i++)
	{
		sum+=a[i];
		av=sum/5;
	}
	return av;
	
}

void main()
{
	float score[5],av;
	int i;
	printf("Input 5 scores:\n");
	for(i=0;i<5;i++)
		scanf("%f",&score[i]);
	av=aver(score);   //address
	printf("average score is %82f\n",av);
}