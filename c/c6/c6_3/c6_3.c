#include <stdio.h>
//����ָ����Ϊ��������,
void main()
{
	void chang(int,int);   //��������
	int *p1,*p2,a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	p1=&a;
	p2=&b;
	chang(p1,p2);
	printf("%d,%d\n",*p1,*p2);
	return 0;
}

void chang(int *pt1,int *pt2)
{
	int t;
	if(*pt1<*pt2)
	{
		t=*pt1;
		*pt1=*pt2;
		*pt2=t;
	}
	return;
}