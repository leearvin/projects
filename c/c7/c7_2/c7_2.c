#include <stdio.h>
void main()
{
	struct person
	{
		long num;
		char name[30];
		int age;
		char sex;
		char address[200];
	}ab2,ab1={1,"Zhang San",38,'M',"Being Jing Haidian Street NO.12"};
	ab2=ab1;
	printf("Number = %ld\nName=%s\n",ab2.num,ab2.name);
	printf("age=%d\nsex=%c\n",ab2.age,ab2.sex);
}