#include <stdio.h>
void main()
{
	int i=7,p;
	//int f(int x,int y); //�������� ����main�� ����֮ǰ
	p=f(i,++i);   //����ʵ���Ǵ����������.
	printf("%f \n",p);
}

float f(int x,int y)
{
	
	int z=5;
	if(x>y) z=1;
	if(x==y) z=0;
	if(x<y) z=-1;
	printf("%d %d\n",x,y);
	return z;
}