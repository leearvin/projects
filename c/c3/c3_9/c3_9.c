#include <stdio.h>
//�������һ����λ��������ÿһ������

void main()
{
	int x,d1,d2,d3;
	printf("Pls. input three positive integer:");
	scanf("%d",&x);
	d1=x/100;   //��һλ
	d2=x%100/10;   //�ڶ�λ
	d3=x%10;   //����λ
	printf("%d%d%d\n",d3,d2,d1);  //reverse output
}