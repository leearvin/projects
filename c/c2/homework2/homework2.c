#include<stdio.h>
#include<math.h>
//Input the length of three sides of a triangle , Calculate the area of this triangle.

void main()
{
	double a,b,c,x;
	printf("Input the length of the first side of the triangle(cm):");
	scanf("%lf",&a);
	printf("Input the length of the second side of the triangle(cm):");
	scanf("%lf",&b);
	printf("Input the length of the third side of the triangle(cm):");
	scanf("%lf",&c);
	/*printf("test:%lf",a+b+c);*/
	if(a<0)
		a=-a;
	if(b<0)
		b=-b;
	if(c<0)
		c=-c;
	if(a+b>c)
		if(a+c>b)
			if(b+c>a)
				x=sqrt((2*c*a*a+a*a-c*c-b*b)*c/8);
	printf("The area of triangle is %.3lf.\n",x); 
	



}