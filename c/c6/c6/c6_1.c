#include <stdio.h>
//
void main()
{
	
	int a=10;
	//定义指针 指向a的地址, 
	int *p=&a; 
	//单纯赋值p=&a;
	printf("*p=%d\n",*p); //打印指针p指向的变量a的值(*p)
	
	printf("Enter a:\n");
	scanf("%d",p);    //p就是a的地址 就是&a
	printf("a=%d\n",a);
	printf("p=%x\n",p); //打印指针变量p的值,也就是a的地址.
	printf("&p=%x\n",&p); //指针变量p的地址
	*p=5;  //*p 就是 *(&a) 就是a , 等价于a=5
	printf("a=%d\n",a);  //5
	(*p)++;             //a++; 
	printf("a=%d\n",a);   //6
}