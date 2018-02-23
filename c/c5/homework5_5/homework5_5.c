#include <stdio.h>
//1.递归法 2 无限位 3 整数转字符串"\0" 4 处理负数
void numToString(long n,char str[])  //正整数转化成字符串
{
	char remainder[]="a"; //余数 初始化成一位的字符串
	long quotient;   //
	quotient=n/10;    //对10的商
	if(quotient!=0)     //判断n是不是个位，如果不是
		 numToString(quotient,str);//把商，就是少了后一位的传入自身函数
	remainder[0]=n%10+'0'; //如果是n个位数 把这个数字转换成字符放入余数数组
	//printf("%c\n",remainder[0]);
	strcat(str,remainder);
}

void main()
{
	long n;
	char s[100]="-";
	char str[100]="";   //初始化一个空的字符串
	printf("Pls enter a interger number:");
	scanf("%ld",&n);
	//numToString(n,str);
	//puts(str);
	if(n>=0)   //正整数和零
	{
		numToString(n,str);
		puts(str);
	}
	else    //处理负数
	{
		n=-1*n;  //转正
		//printf("%ld",n);
		numToString(n,str);
		strcat(s,str);
		puts(s);
	}

}
