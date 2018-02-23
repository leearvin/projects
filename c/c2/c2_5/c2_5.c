#include<stdio.h>

void main()
{
	char ch='A';short sn=10;
	float x=10.17,y=20.4;
	int n=10;
	unsigned long m=20L;
	printf("   * * * 运行结果 * * * \n");
	printf("int <- char+short: \n");
	printf("    ch: %d byte\n",sizeof(ch));
	printf("    sn: %d byte\n",sizeof(sn));
	printf(" ch+sn: %d byte\n",sizeof(ch+sn));
	printf("\n double <- float+float:\n");
	printf("     x: %d byte\n",sizeof(x));
	printf("     y: %d byte\n",sizeof(y));
	printf("   x+y: %d byte\n",sizeof(x+y));
	printf("\n unsigned long <- int * unsigned long:\n");
	printf("     n: %d byte\n",sizeof(n));
	printf("     m: %d byte\n",sizeof(m));
	printf("   n*m: %d byte\n",sizeof(m*n));






}
