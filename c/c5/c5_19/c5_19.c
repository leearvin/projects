#include <stdio.h>
//practice extern
int vs(int xl,int xw)
{
	extern int xh;  //声明外部变量
	int v;
	v=xl*xw*xh;
	return v;
}

void main()
{
	extern int xw,xh;
	int xl=5;
	printf("xl=%d,xw=%d,xh=%d,v=%d\n",xl,xw,xh,vs(xl,xw));
}

int xl=3,xw=4,xh=5;