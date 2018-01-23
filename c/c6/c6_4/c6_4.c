#include <stdio.h>
//∂‡º∂÷∏’Î
void main()
{
	int *p1,**p2,***p3,****p4,x=10;
	p1=&x;
	p2=&p1;
	p3=&p2;
	p4=&p3;
	printf("x=%d\n",****p4);
} 