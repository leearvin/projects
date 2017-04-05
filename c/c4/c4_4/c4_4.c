#include <stdio.h>
//Initializing a two-demensional array A,and select the largest element of each row from array A, output to Array B.
void main()
{
	int a[3][4],b[3];
	int i,j;
	printf("Pls. input Arrau A:\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	
	printf("\n");
	for(i=0;i<3;i++)
	{
		b[i]=a[i][0];
		for(j=1;j<4;j++)
			if(a[i][j]>b[i])
				b[i]=a[i][j];
	}

	printf("Array b:\n");
	for(i=0;i<3;i++)
		printf("%5d",b[i]);
	printf("\n");


//end	
}