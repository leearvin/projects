#include<stdio.h>
#include<math.h>
//Input two of  int number,output Quotients and its second decimal number.
//numeric tyoe conversion

void main()
{
	int num_a, num_b,second_decimal_number;
	double quotient;
	printf("Input the first  int number:");
	scanf("%d",&num_b);
	printf("Input the second  int number:");
	scanf("%d",&num_a);
	
	/*printf("test:%lf",a+b+c);*/
	
	quotient = (float)num_a/num_b;
	//second_decimal_number = quotient * 100 % 10;
	printf("The quotient is %d ,%d ,%f .\n",num_a,num_b,quotient); 
	//printf("The second decimal number is %hd.\n",second_decimal_number);
	second_decimal_number = (int)(quotient * 100) % 10;
	printf("the second decimal number of the quotient is %d." ,second_decimal_number );
	



}