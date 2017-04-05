#include <stdio.h>

void main()
{
	float max(float,float,float);
	float a,b,c,big;
	float (*p)(float,float,float); //定义指向函数的指针变量
	p=max;                         //指针p指针max函数
	scanf("%f %f %f",&a,&b,&c);
	//big=max(a,b,c);
	big=(*p)(a,b,c);    //通过指向函数的指针变量调用函数
	printf("a=%f,b=%f,c=%f,big%f\n",a,b,c,big);



}

float max(float x,float y, float z)
{
	float temp=x;
	if(temp<y) temp=y;
	if(temp<z) temp=z;
	return temp;
}