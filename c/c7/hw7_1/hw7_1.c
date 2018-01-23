#include <stdio.h>
#include <string.h>
void main()
{
	//int i;
	typedef struct bike{
		long code;
		char color[10];
		int style;

	}BIKE;
	BIKE bike1;
	bike1.code=1;
	strcpy(bike1.color,"red");//{1,"red",28};
		bike1.style=28;
	printf("The Bike is as below:\n");
	printf("Code:%ld\nColor:%s\nStyle:\n",bike1.code,bike1.color,bike1.style);



}