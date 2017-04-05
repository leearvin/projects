#include <stdio.h>
void main()
{
	//指向指针的指针变量
	char *cities[]={"Beijing","Shanghai","Tianjin","Chongqing","Shenyang","Hangzhou","Lanzhou","Xian","Wulumuqi","Suzhou"};
	 //二级指针
	char **p;  
	int i;
	for(i=0;i<10;i++)
	{
		p=cities+i;   //
		printf("%s\n",*p);
	}
}