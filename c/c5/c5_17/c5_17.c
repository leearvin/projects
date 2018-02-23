#include <stdio.h>
//1 to 4 factorial
int fac(int n)
{
	static int f=1;
	f=f*n;
	return(f);
}

void main()
{
	int k;
	for(k=1;k<=4;k++)
		printf("%d!=%d\n",k,fac(k));

}