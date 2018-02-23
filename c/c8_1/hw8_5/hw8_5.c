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
	FILE *fp,*fpn;
	int i;
	struct student sss,s[20];
	if((fp=fopen("std.txt","a+"))==NULL)
	{
		printf("can't open file!");
		exit(0);
	}
	printf("Pls input students info:\n");
	/*
	for(i=0;i<2;i++)
	{
		scanf("%s %d %c %f %f",sss.name,&sss.num,&sss.sex,&sss.weight,&sss.height);
		//fputs(wares.name,fp);
		fprintf(fp,"%s %d %c %f %f\n",sss.name,sss.num,sss.sex,sss.weight,sss.height);
	}
	*/
	//rewind(fp);
	fclose(fp);

	if((fpn=fopen("in.txt","rb"))==NULL)
	{
		printf("can't open file!");
		exit(0);
	}
	
	fread()
	/*
	for(i=1;!feof(fp);i++)
	{
		printf("%d\n",sizeof(struct student));
		system("pause");
		fscanf(fp,"%s %d %c %f %f",sss.name,&sss.num,&sss.sex,&sss.weight,&sss.height);
		//fseek(fp,sizeof(struct student),0);
		fseek(fp,0L,SEEK_END);
		if(i/2==0)
			printf("%s %d %c %f %f\n",sss.name,sss.num,sss.sex,sss.weight,sss.height);

	}
	*/


	
}
