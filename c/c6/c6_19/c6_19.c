#include <stdio.h>
void main()
{
	//ָ��ָ���ָ�����
	char *cities[]={"Beijing","Shanghai","Tianjin","Chongqing","Shenyang","Hangzhou","Lanzhou","Xian","Wulumuqi","Suzhou"};
	 //����ָ��
	char **p;  
	int i;
	for(i=0;i<10;i++)
	{
		p=cities+i;   //
		printf("%s\n",*p);
	}
}