#include <stdio.h>
//给定程序中函数fun的功能是：找出100～n（不大于1000）之间的三位数字相等的所有整数，把这些整数放在s所指的数组中，整数的个数作为函数值返回。在程序的下划线处填入正确的内容并把下划线删除，使程序得出正确的结果即可。
//程序填空如下：
#define  N  100

void main()
{ 
	int  fun(int  *s,int  n);  //对调用函数声明
	int  a[N],n,num=0,i;
	do
	{  
		printf("\nEnter n(<=1000);  "); 
		scanf("%d",&n);
	}while(n>1000);

	num=fun(a,n);
	printf("\n\nThe result:\n");
	for(i=0; i<num; i++) 
		printf("%5d",a[i]);
	printf("\n\n");
}

int  fun(int  *s,int  n)
{ 	
	int i,j,k,a,b,c;
	j=0;
	for(i=100;i<=n;i++)    /*原题是 < 不是 <= , 这样当输入222或者999这类极端情况的时候就漏了最大的一个*/

	{
/**************found**************/
		k= i ;
		a=k%10;
		k/=10;
		b=k%10; 
		k/=10;
/**************found**************/
		c=  k%10  ;
		if(a==b&&a==c) 
			s[j++]=i;
	}
	return  j;
}

