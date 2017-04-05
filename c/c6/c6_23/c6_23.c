#include <stdio.h>
#include <string.h>
char *month_name(int n);  //原形声明
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
	//指针数组
	static char *english_name[]={"illegal month","January","February","March","April","May","June","July","August","September","October","November","December"};
	if(n<1||n>12)
		return (english_name[0]); //返回0号元素的首地址
	else
		return (english_name[n]);  //返回对应月份的首地址

}