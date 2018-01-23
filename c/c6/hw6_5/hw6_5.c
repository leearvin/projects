#include <stdio.h>
//输入n个整数，找出最大最小值的
#define N 5

void main()
{
	int a[N],i,*p;
	int max,min;
	p=a;
	printf("Pls enter %d number:\n",N);
	scanf("%d",p);
	max=min=*p;
	for(i=1;i<N;i++)
	{
		scanf("%d",p+i);
		if(max<*(p+i))
			max=*(p+i);
		if(min>*(p+i))
			min=*(p+i);
	}
	printf("The max number is %d\n",max);
	printf("The min number is %d\n",min);

}