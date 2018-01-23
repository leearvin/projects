#include <stdio.h>
//Taxi billing system
void main()
{
	int car;
	float mile,price;

	printf("\t       Taxi billing system.\n");

	printf("\t==================================\n");
	printf("Models and pricing\n");
	printf("\t1--Xiali car , start fee CNY7.00 ,within the three kilometer. CNY2.10 per kilometer ,three kilometer away.");
	printf("\t1--Santana car , start fee CNY8.00 ,within the three kilometer. CNY2.40 per kilometer ,three kilometer away.");
	printf("\t1--Xiali car , start fee CNY9.00 ,within the three kilometer. CNY2.70 per kilometer ,three kilometer away.");
	printf("-----------------------------------------------------------------------------------------------------------\n");
	printf("Pls. enter car style(1-3):\n");
	scanf("%d",&car);
	printf("Pls. enter how many kilometer:\n");
	scanf("%f",&mile);
	if(car==1)
		if(mile<=3) price=7;
		else price=7+(mile-3)*2.1;
	else 
		if(car==2)
			if(mile<=3) price=8;
			else price=8+(mile-3)*2.4;
		else 
			if(car==3)
				if(mile<=3) price=9;
				else price=9+(mile-3)*2.7;
			else
				{
					printf("wrong car style!\n");
					price=0;
				}
	printf("Taxi fee payable is CNY%.2f.\n",price);


}