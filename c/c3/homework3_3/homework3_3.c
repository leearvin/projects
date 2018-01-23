

#include<stdio.h>
#include<math.h>
//Input the length of three sides of a triangle , Calculate the area of this triangle.
double area(double a,double b, double c)
{
	double x;
	x=sqrt((2*c*a*a+a*a-c*c-b*b)*c/8);
	printf("The area of triangle is %.2f.\n",x);
}
void main()
{
	double a,b,c,d;
	printf("Input the length of the first side of the triangle(cm):");
	scanf("%lf",&a);
	printf("Input the length of the second side of the triangle(cm):");
	scanf("%lf",&b);
	printf("Input the length of the third side of the triangle(cm):");
	scanf("%lf",&c);
	/*printf("test:%lf",a+b+c);*/
	if(a>0&&b>0&&c>0)
		if((a+b>c)&&(a+c>b)&&(b+c>a))
		{	
			if(c>=b&&c>=a)
			{
				if(b>=a)
					area(a,b,c);
				else
					area(b,a,c);
			}
			if(a>=b&&a>=c)
			{
				if(b>=c)
					area(c,b,a);
				else
					area(b,c,a);
			}
			if(b>=c&&b>=a)
			{
				if(a>=c)
					area(c,a,b);
				else
					area(a,c,b);
			}
						
			
		}
		else
			printf("it is not a triange.\n");
	else
		printf("it is not a triange.\n");

}
	
