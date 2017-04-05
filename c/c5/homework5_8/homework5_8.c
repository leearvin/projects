#include <stdio.h>
#include <string.h>
//input a four digit numbers, output four digit chractors and blank in the middle of digits
void numToString(int n,char str[])  //正整数转化成字符串
{
	char remainder[]="a"; //余数 初始化成一位的字符串
	int i;
	//printf("%d\n",strlen(str));
	for(i=1000;i>=1;i/=10)
	{
		//printf("%d\n",i);
		remainder[0]=n/i%10+'0';  //把余数转成字符
		
		str[strlen(str)]=remainder[0];
		//printf("%d\n",i);
		if(i!=1)
			strcat(str," ");
		//printf("%d\n",strlen(str));
	}
	
	
	
}

void main()
{
	int n;
	char str[8]="";   //初始化一个空的字符串
	printf("Pls enter a four digit interger number :");
	scanf("%d",&n);
	numToString(n,str);
	puts(str);
	printf("%d\n",strlen(str));  //检验长度 保证结尾没有空格
		
}