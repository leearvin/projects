#include <stdio.h>
//by Selection ranking method, sort ten integer numbers.

void selectsort(int a[],int m);
// a[]��Ҫ���������, mΪ���г���
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
	for(i=0;i<m-1;i++)   //ѭ������,����Ϊn������ ѭ��n-1��
	{
		k=i;       // ÿ��ѭ����ʼ,k��ʼ������ʣ�����еĵ�һ��Ԫ��
		for(j=i+1;j<m;j++)   //ʣ�����н�����ѭ��ѭ��
		{
			if(a[j]<a[k])    //���� ǰ���С��,�Ƚ�2�����ֵĴ�С,
				k=j  ;     //��С�ķŵ���һ��ѭ���м����Ƚ�
		}
		if(i!=k) //ÿ�δ�ѭ��k��������Ϊi ���k==i(T) ��ô˵��i������С�� ���û� ���򽻻�a[i]��a[k]��ȷ��ѡ��ʱ��С��Ԫ��
		{
			tmp=a[i];
			a[i]=a[k];
			a[k]=tmp;
		}
	}
}