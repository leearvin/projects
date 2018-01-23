#include <stdio.h>
//by Selection ranking method, sort ten integer numbers.

void selectsort(int a[],int m);
// a[]需要排序的数列, m为数列长度
void main()
{
	int i,a[10];
	printf("Input ten numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	selectsort(a,10);
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	


}

void selectsort(int a[],int m)
//void selectsort(int a[])
{
	int i,j;
	int k;
	int tmp;
	int l;
	l=sizeof(a);
		printf("%d\n",l);
	for(i=0;i<m-1;i++)   //循环次数,长度为n的数列 循环n-1次
	{
		k=i;       // 每次循环开始,k初始设置在剩余数列的第一个元素
		for(j=i+1;j<m;j++)   //剩余数列进行内循环循环
		{
			if(a[j]<a[k])    //升序 前面放小的,比较2个数字的大小,
				k=j  ;     //把小的放到下一个循环中继续比较
		}
		if(i!=k) //每次大循环k都被重置为i 如果k==i(T) 那么说明i就是最小的 不用换 否则交换a[i]和a[k]的确保选择到时最小的元素
		{
			tmp=a[i];
			a[i]=a[k];
			a[k]=tmp;
		}
	}
}