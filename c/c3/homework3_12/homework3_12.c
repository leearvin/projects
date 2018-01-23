#include <stdio.h>

//4x3-8x2+6x-12=0  solution of the equation near 1.5 by newton iteration
double f(float x)
{
	double result;
	result = 4*x*x*x-8*x*x+6*x-12;
	return result;
}
double fl(float x)
{
	double result;
	result = 12*x*x-16*x+6;
	return result;
}


void main()
{
	int i;
	double guess,x2,x1;
	x1=1;
	//while(1)
	for(i=1;i<=20;i++)
	{
		
		printf("x1=%lf,%lf,%lf\n",x1,f(x1),fl(x1));
		x2=x1-f(x1)/fl(x1);
		if(((int)(x1*1000000)==(int)(x2*1000000)))
			break;
		x1=x2;
		if((int)(x1*10)==15)
			break;
		
	}
printf("The solution is %lf\n",x1)	;


}