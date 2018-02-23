#include <stdio.h>
#include <math.h>
//calculate the area of the triangle by the three sides of it.
//º£Â×-ÇØ¾Å*¹«Ê½
float area_triangle(float a,float b,float c)
{
	float s,p;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;

}

void main()
{
	float s,a,b,c;
	printf("Pls. enter three sides of triangle:");
	scanf("%f %f %f",&a,&b,&c);
	s=area_triangle(a,b,c);
	printf("The area is %f\n",s);
}