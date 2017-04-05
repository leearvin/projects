#include <stdio.h>
//
#define PI 3.1415936
#define L(R) 2*PI*R
#define S(R) PI*R*R
#define V(R) 4.0/3*PI*R*R*R

void main()
{
	float r,l,a,v;
	r=4.0;
	l=L(r);
	a=S(r);
	v=V(r);
	printf("r=%f\nl=%f\na=%f\nv=%f\n",r,l,a,v);
}