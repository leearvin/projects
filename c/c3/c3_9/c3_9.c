#include <stdio.h>
//逆序输出一个三位正整数的每一个数字

void main()
{
	int x,d1,d2,d3;
	printf("Pls. input three positive integer:");
	scanf("%d",&x);
	d1=x/100;   //第一位
	d2=x%100/10;   //第二位
	d3=x%10;   //第三位
	printf("%d%d%d\n",d3,d2,d1);  //reverse output
}