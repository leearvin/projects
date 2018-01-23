#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
	struct person
	{
		long num;
		char name[30];
		int age;
		char sex;
		char address[200];
	};
	struct person *pab;  //定义一个指向结构的指针
	//初始化,分配一片内存 大小是结构体的大小,返回头地址.强制把void类型指针转换成struct类型指针 与指针定义匹配
	pab=(struct person *)malloc(sizeof(struct person)); 
	if(pab==NULL)  //内存分配失败
	{
		printf("Malloc failure");
		exit(0);
	}
	pab->num=10;
	strcpy(pab->name,"Guo Xiao Wen");
	pab->age=28;
	pab->sex='m';
	printf("Number=%ld\nName=%s\n",pab->num,pab->name);
	printf("Age=%d\nSex=%c\n",pab->age,pab->sex);
	if(pab!=NULL)
		free(pab);     //释放掉指针空间


}  //end of main



