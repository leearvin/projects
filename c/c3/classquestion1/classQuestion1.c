#include <stdio.h>
//输入10x回车20y回车 
//如果输入10(空格)x 则会让c1的值是空格 而不是x

void main()
{
	int a1,a2;
	char c1,c2;
	printf("Please input a1c1a2x2:");
	scanf("%d%c%d%c",&a1,&c1,&a2,&c2);
	printf("a1=%d,c1=%c,a2=%d,c2=%c",a1,c1,a2,c2);
}