#include <stdio.h>
void main()
{
	int x=2,y=3,z=0;
	printf("(1)x=%d,y=%d,z=%d\n",x,y,z);
	fun(x,y,z);
	printf("(4)x=%d,y=%d,z=%d\n",x,y,z);
}

fun(int x,int y,int z)
{
	printf("(2)x=%d,y=%d,z=%d\n",x,y,z);
	z=x+y;
	x=x*x;
	y=y*y;
	printf("(3)x=%d,y=%d,z=%d\n",x,y,z);
}