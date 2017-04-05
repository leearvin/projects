#include <stdio.h>
//Initializing a two-demensional array A,Input 5 students and 3 classes results,calculate the average of each student and each class.
void main()
{
	int a[5][3];
	int i,j;
	float b[5],c[3],s;
		printf("Pls. input scores:\n");
	for(i=0;i<5;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	
	printf("\n");
	for(i=0;i<5;i++)
	{
		s=0;
		for(j=0;j<3;j++)
			s+=a[i][j];
		b[i]=s/3.0;
	}
	for(j=0;j<3;j++)
	{
		s=0;
		for(i=0;i<5;i++)
			s+=a[i][j];
		c[j]=s/5.0;
	}

	
	for(i=0;i<5;i++)
		printf("No. %d : %8.2f \n",i+1,b[i]);
	printf("\n");
	printf("English: %8.2f \n Math: %8.2f \n C language: %8.2f\n",c[0],c[1],c[2]);


//end	
}