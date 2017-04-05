#include <stdio.h>
//Input x, output y. There is a function of x and y.
//output
void main()
{
	float x,y;
	printf("Input a number to x:\n");
	scanf("%f",&x);
	if(x<2)
		y=x;
	else if(x<10)
		y=5*x-1;
	else
		y=2*x/4;
	
	printf("x=%f,y=%f",x,y);
			
}