#include <stdio.h>

struct person
{
	long num;
	char name[30];
	int age;
	char sex;
	char address[200];
}ab1={1,"Zhang San",38,'M',"Being Jing Haidian Street NO.12"};

#include <stdio.h>
void main()
{
	struct person *pabook;   //����һ��ָ��ṹ���ָ��
	pabook = &ab1;   //ָ���ʼ�� ָ��ʵ�����ĵ�ַ
	printf("Number=%d\nName=%s\n",pabook->num,pabook->name);
	printf("Age=%d\nSex=%c\n",pabook->age,pabook->sex);
}