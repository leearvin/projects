#include <stdio.h>
//output multiplication table
void main()
{
	int j,i,mul;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			mul=i*j;
			printf("%d*%d=%d\t",i,j,mul);
		}
		printf("\n");
		
	}
	
	
}