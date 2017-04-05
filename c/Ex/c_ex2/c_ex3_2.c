#include <stdio.h>
//给定程序中函数fun的功能是：将形参n中各位上为偶数的数取出，并按原来从高位到低位的顺序组成一个新的数，并作为函数值返回。
unsigned long fun(unsigned long  n)
{ 
	unsigned long x=0,s,i;    
	int  t;  //余数
	s=n;   //形参值导入
/*********found**********/
	i=1; //偶数的位数
	
/*********found**********/
	while(s!=0)  //如果不是零
	{  
		t=s%10;  //最后一位数字
		if(t%2==0)
		{
/*********found**********/
			x=x+t*i;   
			i=i*10;
		}
		s=s/10;   //截掉最后一位
	}
	return x;
}

main()
{ 
	unsigned long n=-1;
	
	while(n>99999999||n<0)
	{	
		printf("Please input(0<n<100000000):");
		scanf("%ld",&n); }
		printf("\nThe result is:%ld\n",fun(n));
}
