#include <stdio.h>
void main()
{
	int x,y;
	x=50;
	y=(x=x-5,x/5);   //y=9
	//y=x=x-5,x/5;       //y=45
	printf("y=%d\n",y);
}