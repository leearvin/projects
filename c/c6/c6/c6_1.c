#include <stdio.h>
//
void main()
{
	
	int a=10;
	//����ָ�� ָ��a�ĵ�ַ, 
	int *p=&a; 
	//������ֵp=&a;
	printf("*p=%d\n",*p); //��ӡָ��pָ��ı���a��ֵ(*p)
	
	printf("Enter a:\n");
	scanf("%d",p);    //p����a�ĵ�ַ ����&a
	printf("a=%d\n",a);
	printf("p=%x\n",p); //��ӡָ�����p��ֵ,Ҳ����a�ĵ�ַ.
	printf("&p=%x\n",&p); //ָ�����p�ĵ�ַ
	*p=5;  //*p ���� *(&a) ����a , �ȼ���a=5
	printf("a=%d\n",a);  //5
	(*p)++;             //a++; 
	printf("a=%d\n",a);   //6
}