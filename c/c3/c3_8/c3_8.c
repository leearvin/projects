#include <stdio.h>
//������ĽǶ�ת���ɻ���
#define PI 3.14159

void main()
{
	int degree;
	float radian;
	printf("Input degree<int>");
	scanf("%d",&degree);
	radian = PI*degree/180;
	printf("%d degree equal to %f radians.\n",degree,radian);


}