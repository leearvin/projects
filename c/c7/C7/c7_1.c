#include <stdio.h>
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
	struct person ab1,ab2;

	ab1.num = 1;
	strcpy(ab1.name,"Zhao Jun");
	printf("Input age and sex:\n");
	scanf("%d %c",&ab1.age,&ab1.sex);
	ab2=ab1;   //结构体整体赋值
	printf("Number = %ld\nName=%s\n",ab2.num,ab2.name);
	printf("age=%d\nsex=%c\n",ab2.age,ab2.sex);


}