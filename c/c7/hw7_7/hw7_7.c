#include <stdio.h>

struct student 
{
	char name[20];
	int num;
	char sex;
	int score;
}arr[3]={
			{"Mary",1,'F',90},
			{"Monic",2,'F',92},
			{"Sunny",3,'M',100}
		};


void main()
{
	int max,i,x=0;
	
	struct student *p;
	p=arr;
	max=0;
	for(i=1;i<=3;i++,p++)
		if(p->sex=='F')
			
			if(max<p->score)
			{
				printf("%d\n",x);
				max=p->score;
				x=i;
			}
	if(x==0)
	{
		printf("There is not Female student!\n");
		exit(0);
	}else
	{
		printf("The female student  is %s, her score is %d\n",arr[x].name,arr[x].score);
	}
}