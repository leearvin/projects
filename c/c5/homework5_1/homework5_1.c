#include <stdio.h>
#include <math.h>
//judge whether a number is a prime number
//algorithm1:go through  from 2 to sqrt(n)
//algorithm2:
int isPrime_1(int num)
{
	int tmp=sqrt(num); 
	int i=2;
	for(;i<=tmp;i++)
		if(num%i==0)
			return 0;   //0, not prime
	return 1;    //1 ,  prime
}
//大于5的素数 有规律 就是所有的素数都会出现在6的倍数的两侧。但是有的不是
int isPrime_2(int num)
{
	int i=5;    //从5开始遍历
	int tmp =sqrt( num);
	if(num ==2|| num==3 );
		return 1;    //2 ,3是素数
	if(num%6!=1&&num%6!= 5)   //不在6的倍数的2侧 一定不是素数
		return 0;  
	
	for(;i<=tmp;i+=6 )      //循环的步长为6
		if(num%i== 0||num %(i+2)==0 ) //找是否存在素数因子，这样的因子一定存在于小于sqrt(n)的6两侧的数里面。如果存在 
			return 0;				//不是素数
					//大于5的素数 有规律 就是所有的素数都会出现在6的倍数的两侧。
	return 1 ;       //否则就是素数
}

void main()
{
	int num;
	printf("Pls. enter a integer number:");
	scanf("%d",&num);
	//if(isPrime_1(num))
	if(isPrime_2(num))
		printf("%d is a Prime.\n",num);
	else
		printf("%d is NOT a Prime.\n",num);	
}
	