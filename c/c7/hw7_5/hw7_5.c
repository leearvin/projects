#include <stdio.h>
#define N 5
struct worker
{
	int num;
	char name[20];
	int age;
	int salary;
};

void main()
{
	int sum=0,i;
	float avg=0;
	struct worker arr[N]=
	{
		{1,"B",20,1000},
		{2,"L",21,2000},
		{3,"Z",22,1500},
		{4,"F",25,1600},
		{5,"N",27,1900}
	};
	
	for(i=0;i<N;i++)
		sum+=arr[i].salary;
	avg=(float)sum/N;
	printf("%d    %.2f\n",sum,avg);

}