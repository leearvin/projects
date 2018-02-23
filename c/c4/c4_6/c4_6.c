#include <stdio.h>
//Output two country name.
void main()
{
	char str[2][5]={{'C','h','i','n','a'},{'J','a','p','a','n'}};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
			printf("%c",str[i][j]);
		printf("\n");
	}

}