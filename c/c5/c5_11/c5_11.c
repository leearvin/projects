#include <stdio.h>#include <stdio.h>
//The average score of five classes, 
float aver(float a[],int n)
{
	int i;
	float av,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		av=sum/n;
	}
	return av;
	
}

void main()
{
	float score_1[5]={1,2,3,4,5};
	float score_2[8]={1,2,3,4,5,6,7,8};
	printf("the average score of student A is %82f\n",aver(score_1,5));
	printf("the average score of student B is %82f\n",aver(score_2,8));
}