#include <stdio.h>

struct player
{
	char name[20];
	char team[20];
	int avg;
};

int inputPlayer1(struct player *p1)
{
	struct player *pp;
	pp=p1;
	printf("Pls enter player iformation:\n");
	printf("Input name:");
	scanf("%s",pp->name);
	printf("Input team:");
	scanf("%s",pp->team);
	printf("Input average sorce:");
	scanf("%d",&pp->avg);
	printf("Input success.\n");
	return 1;
}


struct player inputPlayer2(struct player pl)
{
	
}

void outputPlayer(struct player *p)
{
	struct player *pp;
	pp=p;
	printf("\nThe name is %s\n",pp->name);
	printf("The Team is %s\n",pp->team);
	printf("The average is %d\n",pp->avg);
}


void main()
{
	//struct player *ppp;
	struct player pl={"test","test",1};
	//ppp=(struct player *)malloc(sizeof(struct player)); //分配内存初始化后才能当函数实参
	//&pl=(struct player *)malloc(sizeof(struct player));
	//inputPlayer1(ppp);
	inputPlayer2(pl);
	//outputPlayer(ppp);
	//outputPlayer(&pl);

}