#include<stdio.h>

void main()
{
	int i=5,j;
	j=++i+i++;
	printf("%d %d\n",i,j);  // 7 , 12  ++ ���ȼ�����+ 
	j=(++i)+(++i);
	printf("%d %d\n",i,j); //9 , 18
}