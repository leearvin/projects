#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10];
	int num;
	int age;
};

void main()
{
	FILE *fp;
	int i,x;
	struct student stu;
	if((fp=fopen("in.txt","rb"))==NULL)
	{
		printf("can't open file!");
		exit(0);
	}

	for(i=0;i<4;i++)
	{
		x=fread(&stu,sizeof(struct student),1,fp);
		printf("%s\t%d\t%d\t%d\n",stu.name,stu.num,stu.age,x);
		system("pause");
	}
	printf("\n");
	for(i=1;1<=4;i++)
	{
		fseek(fp,-i*(sizeof(struct student)),2);
		fread(&stu,sizeof(struct student),1,fp);
		printf("%s\t%d\t%d\n",stu.name,stu.num,stu.age);
	}

	fclose(fp);


}