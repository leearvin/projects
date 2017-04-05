#include <stdio.h>
//指针数组实现 输入一个数字 输出对应的英文星期
#define N 7

void main()
{
	char *p[N]={"Monday","Tuesday","Wensday","Thursday","Friday","Saturday","Sunday"};
	
	int w;
	printf("Pls .enter a number for which day in a week:");
	scanf("%d",&w);
	if(w<1||w>7)     b                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
		printf("Input a wrong number!");
	else
		printf("Today is %s",p[w]);
}