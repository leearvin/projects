#include <stdio.h>
//Input x, output y. There is a function of x and y.
//output
void main()
{
	float a,b;
	char c;

	printf("Input expression: a+(-,*,/)b \n ");
	scanf("%f%c%f",&a,&c,&b);
	switch(c)
		{
		case '+':printf("%f\n",a+b);break;
		case '-':printf("%f\n",a-b);break;
		case '*':printf("%f\n",a*b);break;
		case '/':printf("%f\n",a/b);break;
		default:printf("Input Error!\n");
		}
	
			
}