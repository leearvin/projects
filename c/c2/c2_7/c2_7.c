#include <stdio.h>

void main()
{
	int m,n,k;
	m=15;n=20;
	k=(--m)+(--n);
	printf("m=%d,n=%d,k=%d\n",m,n,k);
	m=15,n=20;
	k=(m--)+(n--);
	printf("m=%d,n=%d,k=%d\n",m,n,k);
}