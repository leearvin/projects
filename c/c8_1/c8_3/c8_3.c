#include <stdio.h>
#include <stdlib.h>

struct empl
{
	char name[20];
	int num;
	int age;
};

void main()
{
	FILE *fp,*fpn;
	int i;
	struct empl employee[5];  //��ʼ�� 5���ṹԪ�ص�����
	
	if((fp=fopen("in.txt","wb"))==NULL)
	{
		printf("Cannot open the file!\n");
		exit(0);
	}
	printf("Pls. enter data:\n");
	for(i=0;i<5;i++)
	{
		scanf("%s %d %d",employee[i].name,&employee[i].num,&employee[i].age);
	}

	fwrite(employee,sizeof(struct empl),5,fp);  //��employee ���ݴ�ŵ�ַ�� ȡ��5�������ݷŵ�fp,
	fclose(fp);
	
	if((fpn=fopen("in.txt","rb"))==NULL)
	{
		printf("Cannot open the file!\n");
		exit(0);
	}
	fread(employee,sizeof(struct empl),5,fpn);
	printf("\n name\t number \t age\n");
	for(i=0;i<5;i++)
	{
		printf("%s\t%5d %10d\n%",employee[i].name,employee[i].num,employee[i].age);
	}
	fclose(fpn);

	
}