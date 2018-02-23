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

void average(struct person *inps);

void main()
{
	struct person *psa;
	psa=abook;   //指向结构体数组的首地址
	average(psa);   //传入函数
}

void average(struct person *inps)
{
	struct person *tpsa;
	int c=0,i;
	int avg,sum=0;
	tpsa=inps;
	for(i=0;i<3;i++)
	{
		sum+=(tpsa++)->age;
		if(tpsa->age<30)
			c+=1;
	}

	avg=sum/3;
	printf("The average age is %d\nperson which age less than thirty count = %d\n",avg,c);

}

