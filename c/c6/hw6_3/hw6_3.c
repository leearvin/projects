#include <stdio.h>
#define N 5

//将数组中的n个数 按相反的顺序（降序）存放后 输出，用指针的方法用2种不同的方法实现。
void main()
{
	int *p,i,j,s,n=5;
	int a[]={4,2,3,1,5};
	p=a;
	for(i=0;i<N;i++)
	{
		for(j=N-1;j>i;j--)
		{
			if(*(p+j-1)<*(p+j))
			{
				s=*(p+j-1);
				*(p+j-1)=*(p+j);
				*(p+j)=s;
			}
			//printf("%d ",*(p+j));
				
		}
		printf("%d \n",*(p+i));
	}
	 
}

/* Program 1
void main()
{
	int *p,i,j,s,n=5;
	int a[]={4,2,3,1,5};
	p=a;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				s=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=s;
			}
		}
		printf("%d ",*(p+i));
	}
}
*/