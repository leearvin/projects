#include <stdio.h>
//static local variables
void auto_static()
{
	int var_auto=0;           //�Զ�������ÿ�ε��ö����³�ʼ����
	static int var_static=0;  //static local variable ֻ��ʼ��һ��
	printf("var_auto=%d,var_static=%d\n",var_auto,var_static);
	++var_auto;
	++var_static;

}

void main()
{
	int i;
	for(i=0;i<3;i++)
		auto_static();
}