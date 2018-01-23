#include <stdio.h>

void main()
{
	struct student 
	{
		int num;
		char name[20];
		int age;
		char address[20];
	}arr[3];
	int i,max,min;
	for(i=0;i<3;i++)
	{
		printf("Pls. enter num \ name \ age \ address.\n");
		scanf("%d %s %d %s",&arr[i].num,arr[i].name,&arr[i].age,arr[i].address);
	}
	max=min=0;
	for(i=1;i<3;i++)
	{
		if(arr[0].age<arr[i].age)
			max=i;
		if(arr[0].age>arr[i].age)
			min=i;
	}

	printf("The oldest student info:\n");
	printf("Code:%d Name:%s Age:%d Address:%s \n  ",arr[max].num,arr[max].name,arr[max].age,arr[max].address);
	printf("The youngest student info:\n");
	printf("Code:%d Name:%s Age:%d Address:%s \n  ",arr[min].num,arr[min].name,arr[min].age,arr[min].address);

}



