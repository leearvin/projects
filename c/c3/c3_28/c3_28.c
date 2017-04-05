#include <stdio.h>
//test  goto.
void main()
{
	int i;
	long f;
	f=1;
	i=1;
loop: if(i<=10)
	{
		f=f*i;  
		i++;
		goto loop;
	}
		//goto loop;  why don't it work when put it here??
	printf("10!=%ld\n",f);

}