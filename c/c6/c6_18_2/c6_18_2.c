#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	printf("argc=%d\n",argc);
	for(i=1;i<=argc-1;i++)
		printf("%s%c",argv[i],(argc>1)?' ':'\n');
	//while(--argc>0)
		//printf("%s%c",*++argv,(argc>1)?' ':'\n');
	return 0;

}