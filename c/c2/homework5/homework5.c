#include<stdio.h>
#include<math.h>
//Input a unsigned number,output First four digits and Last four digitss..
//numeric tyoe conversion

void main()
{
	unsigned input_number,tem_number;
	int i=1 ;
	printf("Input the unsigned  int number:");
	scanf("%d",&input_number);
	tem_number = input_number;

	
	//uotput the last four digits
	printf("The first number of the last four digits in the number %d  is %d .\n",input_number,input_number/1000%10); 
	printf("The second number of the last four digits in the number %d  is %d .\n",input_number,input_number/100%10); 
	printf("The third number of the last four digits in the number %d  is %d .\n",input_number,input_number/10%10); 
	printf("The fourth number of the last four digits in the number %d  is %d .\n",input_number,input_number%10); 
	
	//output the first four digits
	while(1)
		{	
			
			if(tem_number<10000)
			{
				//printf("%d\n",tem_number);
				printf("The first number of the first digits in the number %d is %d.\n",input_number,tem_number/1000%10);
				printf("The second number of the first four digits in the number %d  is %d .\n",input_number,tem_number/100%10); 
				printf("The third number of the first four digits in the number %d  is %d .\n",input_number,tem_number/10%10); 
				printf("The fourth number of the first four digits in the number %d  is %d .\n",input_number,tem_number%10); 
				break;
			}
			tem_number/=10;
		}





}