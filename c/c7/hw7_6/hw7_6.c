#include <stdio.h>
#define N 5

struct candidate
{
	char name[20];
	char sex;
	int age;
	int votes;
};

void main()
{
	struct candidate *p1,*p2;
	int i;
	p1=(struct candidate *)malloc(sizeof(struct candidate));
	p2=p1;
	printf("Pls input candidate info(Name votes):\n");
	for(i=0;i<N;i++,p1++)
		scanf("%s %d",p1->name,&p1->votes);
	
	for(i=0;i<N;i++,p2++)
		printf("candidate name : %s  Votes: %d \n",p2->name,p2->votes);
	
}