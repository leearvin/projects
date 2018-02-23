#include<stdio.h>
#include<math.h>
//Input two of Long int number,output Quotients and remainders.

void main()
{
	long int num_a,num_b,quotient,remainder;
		
	printf("Input the first long int number:");
	scanf("%d",&num_a);
	printf("Input the second long int number:");
	scanf("%d",&num_b);
	
	/*printf("test:%lf",a+b+c);*/
	
	quotient = num_a/num_b;
	remainder = num_a - quotient*num_b;
	printf("The quotient is %hd.\n",quotient); 
	printf("The remainder is %hd.\n",remainder);
	



}