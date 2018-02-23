#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	char ch;
	fp=fopen("text.txt","r");
	if(fp==NULL)
	{
		printf("can not open file!\n");
		exit(0);
	}

	while(!feof(fp))
	{
		ch=getc(fp);
		printf("%c",ch);
	}

	printf("\n");
	rewind(fp);
	while(!feof(fp))
	{
		ch=getc(fp);
		if(ch<='z'&&ch>='a')
			ch-=32;
		printf("%c",ch);
	}
	printf("\n");
	fclose(fp);


}