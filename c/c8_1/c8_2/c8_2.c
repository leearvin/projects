#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fpIn,*fpOut;
	char ch,filename1[10],filename2[10];
	printf("Input the filename of data resource:\n");
	scanf("%s",filename1);
	printf("Input the filename of convertion:\n");
	scanf("%s",filename2);
	fpIn=fopen(filename1,"r");
	fpOut=fopen(filename2,"w");

	if(fpIn==NULL)
	{
		printf("Cannot open the resource file\n");
		exit(0);
	}
	if(fpOut==NULL)
	{
		printf("Cannot open the convert file\n");
		exit(0);
	}
	while(!feof(fpIn))   //判断是否到文件尾部
	{
		ch=fgetc(fpIn);    //输入一个字符
		if(ch>='a'&&ch<='z')
		{	
			ch-=32;
			fputc(ch,fpOut);
		}
		
	}
	fclose(fpIn);
	fclose(fpOut);

}