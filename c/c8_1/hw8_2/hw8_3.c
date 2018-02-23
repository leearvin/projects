#include <stdio.h>
#include <stdlib.h>
struct commodity
{
	char name[20];
	int price;
	float amount;
	char origin[20];
};

void main()
{
	FILE *fp;
	int i;
	struct commodity wares;
	if((fp=fopen("in.txt","r+"))==NULL)
	{
		printf("can't open file!");
		exit(0);
	}
	printf("Pls input commodity info:\n");
	for(i=0;i<5;i++)
	{
		scanf("%s %d %f %s",wares.name,&wares.price,&wares.amount,wares.origin);
		//fputs(wares.name,fp);
		fprintf(fp,"%s %d %f %s\n",wares.name,wares.price,wares.amount,wares.origin);
	}


	fclose(fp);
}
