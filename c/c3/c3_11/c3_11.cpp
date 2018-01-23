//输出关系表达式的值
#include <stdio.h>
// 1,0
// 0,0

void main()
{
	char c='k';
	int i=1,j=2,k=3;
	printf("%d,%d\n",'a'+5<c,-i-2>=k+1);  //'a'的ASCII值是97，'k'的ASCII值是107，97+5<107 True. -1-2>3+1 False
	printf("%d,%d\n",i+j+k==-2*j,k==j==i+5);//6==-2*2 False , k==j False 故值为0 0==1+5 False


}