#include <stdio.h>
//求一维数组中最大的元素
void main()
{
	int sub_max(int b[],int i);
	int n,a[10];
	int *ptr=a;   //定义指针指向数组
	int max;
	printf("Pls. enter ten number for teh array:\n");
	for(n=0;n<=9;n++)  //依次输入数组元素的数据
		scanf("%d",&a[n]);
	max=sub_max(ptr,10);  //调用函数,ptr是a的指针,作为实参输入函数m,ptr是数组a的首地址
	printf("max=%d\n",max);
	
}

//int sub_max(int b[],int i)
//{
//	int temp,j;
//	temp=b[0];
//	for(j=1;j<=i-1;j++)
//		if(temp<b[j])
//			temp=b[j];
//	return temp;
//}

int sub_max(b,i)
int *b,i;
{
	int temp,j;
	temp=b[0];
	for(j=1;j<=i-1;j++)
	{
		if(temp<b[j])
			temp=b[j];
	}
	return temp;
}
