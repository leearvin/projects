#include <stdio.h>
//gcd()-Greatest common divisor of two numbers
//lcm().least common multiple of two numbers
//շת����� 1��a%b=c 2��c=0 b�����Լ�� 3��c!=0, a=b, b=c goto 1
int gcd(int x,int y)
{
	int z;
	while(y!=0)
	{
		z=x%y;   //����
		x=y;	 //����
		y=z;
	}
	return x;
}
int lcm(int x,int y)
{
	return x*y/gcd(x,y);
}

void main()
{
	int x,y;
	printf("Pls. enter 2 integer numbers:");
	scanf("%d %d",&x,&y);
	printf("GCD of %d and %d is %d\n",x,y,gcd(x,y));
	printf("LCM of %d and %d is %d\n",x,y,lcm(x,y));
}