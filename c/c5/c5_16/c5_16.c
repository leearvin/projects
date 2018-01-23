#include <stdio.h>
//static local variables
void auto_static()
{
	int var_auto=0;           //自动变量，每次调用都重新初始化。
	static int var_static=0;  //static local variable 只初始化一次
	printf("var_auto=%d,var_static=%d\n",var_auto,var_static);
	++var_auto;
	++var_static;

}

void main()
{
	int i;
	for(i=0;i<3;i++)
		auto_static();
}