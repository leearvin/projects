struct person
{
	long num;
	char name[30];
	int age;
	char sex;
	char address[200];
}abook[3]=
	{
		{1,"Zhang San",38,'M',"Being Jing Haidian Street NO.12"},
		{2,"Li Si",26,'f',"Shanghai Fudan University"},
		{3,"Wang Wu",35,'M',"Shenzhen Sitong Co.,LTD"}
	};

void main()
{
	int i;
	int avg,sum=0;
	for(i=0;i<3;i++)
		sum+=abook[i].age;
	avg=sum/3;
	printf("Tha average age is %d \n",avg);
}