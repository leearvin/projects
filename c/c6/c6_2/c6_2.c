#include <stdio.h>
//
void main()
{
	int i1,i2,*p1,*p2,t;
	p1=&i1;
	p2=&i2;
	printf("Enter two numbers:\n");
	scanf("%d %d",p1,p2);
	//i1要放大的数值
	if(i1<i2)   ////互换
	{    
		t=*p1;
		*p1=*p2;
		*p2=t;
	}
	printf("i1=%d,i2=%d\n",i1,i2);
}