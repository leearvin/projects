#include <stdio.h>
void main()
{
	float *p1,a[2];
	p1=a;  //≥ı ºªØ
	printf("Pls eneter 2 float number:\n");
	scanf("%f %f",p1,p1+1);
	printf("The sum is %f,The difference is %f.\n",*p1+*(p1+1),*p1-*(p1+1));
	

}