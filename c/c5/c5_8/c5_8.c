#include <stdio.h>
//n!
float fac(int n)
{
	float f;
	if(n<0)
		printf("n<0,input data error!");
	else if(n==1||n==0)
		f=1;
	else 
		f=n*fac(n-1);

	return(f);

}

void main()
{
	int n;
	float y;
	printf("Pls. enter a integer number:");
	scanf("%d",&n);
	y=fac(n);
	printf("%d!=%15.0f\n",n,y);
}