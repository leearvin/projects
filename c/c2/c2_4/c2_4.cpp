#include<stdio.h>
void main()
{
	printf("  * * * 运行结果 * * * \n");
	printf("           char:%d Byte\n",sizeof(char));
	printf("  unsigned char:%d Byte\n",sizeof(unsigned char));
	printf("          short:%d Byte\n",sizeof(short));
	printf(" unsigned short:%d Byte\n",sizeof(unsigned short));
	printf("            int:%d Byte\n",sizeof(int));
	printf("   unsigned int:%d Byte\n",sizeof(unsigned int));
	printf("           long:%d Byte\n",sizeof(long));
	printf("  unsigned long:%d Byte\n",sizeof(unsigned long));
	printf("          float:%d Byte\n",sizeof(float));
	printf("         double:%d Byte\n",sizeof(double));
}