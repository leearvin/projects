#include <stdio.h>
//seeking the 10 factorial.
void main()
{
	int i;
	long f;
	i=1;
	f=1;
	do
	{
		f=f*i;
		i++;
	
	}
	while(i<=10);

	
	printf("10!=%ld\n",f);








}