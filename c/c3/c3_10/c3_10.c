#include <stdio.h>
//�����������4�������ַ�ƴ�ӳ�һ��int�͵���ֵ

void main()
{
	char d1,d2,d3,d4;
	int i;
	printf("Pls. input four character of nunmber:");
	d1 = getchar();
	d2 = getchar();
	d3 = getchar();
	d4 = getchar();
	i = (d1 - '0')*1000+(d2-'0')*100+(d3-'0')*10+(d4-'0');
	// '0'+'6' ��Ϊ�ַ���127���ڸ������ǻ�ͨ�� �����൱��'0'��'6'��ASCIIֵ48+54
	printf("This value is %d.\n",i);
}