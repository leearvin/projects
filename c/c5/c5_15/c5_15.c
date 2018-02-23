#include <stdio.h>
//the global variables and local variables of the same name
int m=13;
int fun(int x ,int y)
{
	int m=3;
	return (x*y-m);  //5*7-3
}
void main()
{
	int a=7,b=5;
	printf("%d\n",fun(a,b)/m);  // 32/13=2

}