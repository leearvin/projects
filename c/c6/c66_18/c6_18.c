#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("argc=%d\n",argc);
	while(--argc>0)
		printf("%s%c",*++argv,(argc>1)?' ':'\n');
	return 0;
} 