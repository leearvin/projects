#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("in.txt","w"))==NULL)
	{
		printf("Cannot open the file!");
		exit(0);
	}
	do
	{
		ch=getchar();
		fputc(ch,fp);
	}while(ch!='\n');
	fclose(fp);
}