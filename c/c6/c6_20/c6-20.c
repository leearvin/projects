#include <stdio.h>
// ����ָ������ �����ɸ������������
void main()
{
	int a[10];  //������������
	int *number[10];  //����ָ������
	int **p;  //����ָ��ָ���ָ�����
	int i;
	for(i=0;i<10;i++) //���鸳ֵ
		a[i]=i+1;
	for(i=0;i<10;i++)
		number[i]=&a[i];  //ָ�����鸳ֵ
	p=number;
	for(i=0;i<10;i++)
	{
		printf("%d ",**p);  //�������������
		p++;
	}

}