#include "stdio.h"
//x��n����
int power(int x,register int n)   //�βο��üĴ�������
{
	register int p;    //�ֲ��Զ��������üĴ�������
	for(p=1;n>0;n--)
		p=p*x;  
	return p;
}

void main()
{
	int s;
	s=power(5,3);
	printf("%d \n",s);
}