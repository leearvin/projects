#include <stdio.h>
//input 2 numbers , calculate the quatratic sum .
double fac(float x, float y)
{
	double sum;
	sum = x*x+y*y;
	return sum;
}

void main()
{
	float x,y;
	double sum;
	printf("Pls. enter 2 numbers(x,y):");
	scanf("%f,%f",&x,&y);
	sum=fac(x,y);
	printf("the sum of squares is %lf\n",sum);
}