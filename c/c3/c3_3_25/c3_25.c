#include <stdio.h>
//seeking the 10 factorial.
void main()
{
	int i;
	long f;
	i=1;
	f=1;
	while(i<=10)
	{
		f=f*i;
		i++;
	}
	printf("10!=%ld\n",f);








}