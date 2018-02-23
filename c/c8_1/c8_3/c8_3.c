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
	struct empl employee[5];  //初始化 5个结构元素的数组
	
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

	fwrite(employee,sizeof(struct empl),5,fp);  //从employee 数据存放地址中 取出5个的数据放到fp,
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