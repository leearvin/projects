#include <stdio.h>

struct worker
{
	int num;
	char name[20];
	int age;
	int salary;
};

void main()
{
	struct worker *p;
	p=(struct worker *)malloc(sizeof(struct worker));
	printf("Pls enter worker info(num name age salary):\n");
	scanf("%d %s %d %d",&p->num,p->name,&p->age,&p->salary);
	printf("The worker you inputed is:\n");
	printf("Name:%s,Age:%d,Code:%d,salary:%d\n",p->name,p->age,p->num,p->salary);
}