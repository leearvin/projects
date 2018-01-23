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
	struct person *pabook;   //定义一个指向结构体的指针
	pabook = &ab1;   //指针初始化 指向实例化的地址
	printf("Number=%d\nName=%s\n",pabook->num,pabook->name);
	printf("Age=%d\nSex=%c\n",pabook->age,pabook->sex);
}