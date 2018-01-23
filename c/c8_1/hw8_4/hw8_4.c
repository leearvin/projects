#include <stdio.h>
#include <stdlib.h>
struct student
{
	char name[20];
	int num;
	char sex;
	float weight;
	float height;

};

void main()
{
	FILE *fp;
	int i;
	struct student sss;
	if((fp=fopen("std.txt","r+"))==NULL)
	{
		printf("can't open file!");
		exit(0);
	}
	printf("Pls input students info:\n");
	for(i=0;i<10;i++)
	{
		scanf("%s %d %c %f %f",sss.name,&sss.num,&sss.sex,&sss.weight,&sss.height);
		//fputs(wares.name,fp);
		fprintf(fp,"%s %d %c %f %f\n",sss.name,sss.num,sss.sex,sss.weight,sss.height);
	}


	fclose(fp);
}
