#include <stdio.h>
int A;    //extern var
void main()
{
	int fun1(int);
	int fun2(int);
	int b=3,c,d,m;
	printf("Pls. enter A,m");
	scanf("%d,%d",&A,&m);
	c=fun1(b);
	printf("%d*%d=%d\n",A,b,c);
	d=fun2(m);
	printf("%d*%d=%d\n",A,m,d);
}