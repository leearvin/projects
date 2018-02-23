#include<stdio.h>
#include<math.h>
//Input seconds, output  ??Hours ??minutes ??seconds, 
//Output the product of those two conplexs.

void main()
{
	long a,bi,c,di;
	
	printf("Input the first complex number (a+bi):\n");
	scanf("%d%d",&a,&bi);
	printf("Input the second complex number(c+di):\n");
	scanf("%d%d",&c,&di);
	
	printf("The product is %d+%di.\n",a*c-bi*di,a*di+bi*c);

}