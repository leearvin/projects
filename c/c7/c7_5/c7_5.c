#include <stdio.h>

struct person
{
	long num;
	char name[30];
	int age;
	char sex;
	char address[200];
}abook[3]=
	{
		{1,"Zhang ",38,'M',"Being Jing Haidian Street NO.12"},
		{2,"Li Si",26,'f',"Shanghai Fudan University"},
		{3,"Wang Wu",35,'M',"Shenzhen Sitong Co.,LTD"}
	};


void main()
{
	int i;
	struct person *psa;
	printf("Num\t\tName\t\tage\t\tsex\t\t\n");
	psa=abook;
	for(i=0;i<3;i++)
	{
		printf("% ld\t\t% s\t\t% d\t\t% c\t\t\n",psa->num,psa->name,psa->age,psa->sex);
		psa++;
	}
}
