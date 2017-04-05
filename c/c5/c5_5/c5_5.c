#include <stdio.h>
void main()
{
	int i=7,p;
	//int f(int x,int y); //函数声明 放在main内 调用之前
	p=f(i,++i);   //函数实参是从右向左计算.
	printf("%f \n",p);
}

float f(int x,int y)
{
	
	int z=5;
	if(x>y) z=1;
	if(x==y) z=0;
	if(x<y) z=-1;
	printf("%d %d\n",x,y);
	return z;
}