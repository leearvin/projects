#include <stdio.h>

void main()
{
	float max(float,float,float);
	float a,b,c,big;
	float (*p)(float,float,float); //����ָ������ָ�����
	p=max;                         //ָ��pָ��max����
	scanf("%f %f %f",&a,&b,&c);
	//big=max(a,b,c);
	big=(*p)(a,b,c);    //ͨ��ָ������ָ��������ú���
	printf("a=%f,b=%f,c=%f,big%f\n",a,b,c,big);



}

float max(float x,float y, float z)
{
	float temp=x;
	if(temp<y) temp=y;
	if(temp<z) temp=z;
	return temp;
}