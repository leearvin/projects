#include <stdio.h>
#include <string.h>
char *month_name(int n);  //ԭ������
void main()
{
	int n;
	char *p;
	printf("Pls. enter a number of month\n");
	scanf("%d",&n);
	p=month_name(n);
	printf("It is %s\n",p);


}

char *month_name(int n)
{
	//ָ������
	static char *english_name[]={"illegal month","January","February","March","April","May","June","July","August","September","October","November","December"};
	if(n<1||n>12)
		return (english_name[0]); //����0��Ԫ�ص��׵�ַ
	else
		return (english_name[n]);  //���ض�Ӧ�·ݵ��׵�ַ

}