#include "stdio.h"
//x的n次幂
int power(int x,register int n)   //形参可用寄存器变量
{
	register int p;    //局部自动变量可用寄存器变量
	for(p=1;n>0;n--)
		p=p*x;  
	return p;
}

void main()
{
	int s;
	s=power(5,3);
	printf("%d \n",s);
}