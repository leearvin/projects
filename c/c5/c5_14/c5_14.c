#include <stdio.h>
//input the length,width and height of the cuboid, 
//find the volume of the cuboid and area of the font,side and top
float s1,s2,s3;    //gthe lobal variable
float vs(float a,float b,float c)
{
	float v;
	v=a*b*c;
	s1=a*b;
	s2=b*c;
	s3=a*c;
	return v; //内部变量返回 外部变量修改后 直接影响外部 不用再返回了
}
void main()
{
	float v,l,w,h;  // length,width,height
	printf("input length,width and height:\n");
	scanf("%f %f %f",&l,&w,&h);
	v=vs(l,w,h);
	printf("v=%5.2f,s1=%6.2f,s2=%7.2f,s3=%8.2f\n",v,s1,s2,s3);
}


