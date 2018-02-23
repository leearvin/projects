#include <stdio.h>
// 利用指针数组 将若干个整形数据输出
void main()
{
	int a[10];  //定义整形数组
	int *number[10];  //定义指针数组
	int **p;  //定义指向指针的指针变量
	int i;
	for(i=0;i<10;i++) //数组赋值
		a[i]=i+1;
	for(i=0;i<10;i++)
		number[i]=&a[i];  //指针数组赋值
	p=number;
	for(i=0;i<10;i++)
	{
		printf("%d ",**p);  //将整形数组输出
		p++;
	}

}