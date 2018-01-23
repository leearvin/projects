#include <stdio.h>
//%-m.n格式字符。
//m 输出的长度，如果m小于实际长度 以实际长度为准；
//n 输出数字 则表示小数的位数 ；如果输出的是字符 表示输出字符的个数；如果实际位数大于n，截去超过部分；
//h 按短整型量输出
//l 按长整型和双精度输出。可以在d o x u f前面使用。

void main()
{
	int a=12;
	float b=123.456789;
	double c=123456789.1234567;
	char d='p';

	printf("a=%d,%5d,%o,%x\n",a,a,a,a);
	printf("b=%f,%lf,%5.4lf,%e\n",b,b,b,b);
	printf("c=%lf,%f,%8.4lf\n",c,c,c);
	printf("d=%c,%8c\n",d,d);
}