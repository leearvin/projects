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
	struct person *pab;  //����һ��ָ��ṹ��ָ��
	//��ʼ��,����һƬ�ڴ� ��С�ǽṹ��Ĵ�С,����ͷ��ַ.ǿ�ư�void����ָ��ת����struct����ָ�� ��ָ�붨��ƥ��
	pab=(struct person *)malloc(sizeof(struct person)); 
	if(pab==NULL)  //�ڴ����ʧ��
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
		free(pab);     //�ͷŵ�ָ��ռ�


}  //end of main



