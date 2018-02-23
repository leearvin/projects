#include <stdio.h>
#define N 5
//用数组和指针完成N*N的数组的矩阵转置，并输出最大值和位置
void outputMatrix(int *a)
{
	int i=N,j=N;
	int (*pt)[N]=a;
	for(i=0;i<5;i++)
	{	
		for(j=0;j<5;j++)
		{
			printf("%d",*(*(pt+i)+j));
		}
		printf("\n");
	}
}

void maxInMatrix(int *a)
{
	int max,i=N,j=N;
	int x1,x2;
	int (*pt1)[N]=a;
	max=**pt1;
	for(i=0;i<5;i++)
	{	
		for(j=0;j<5;j++)
		{
			if(max<*(*(pt1+i)+j));
			{
				max=*(*(pt1+i)+j);
				x1=i;
				x2=j;
			}
		}
		
	}
	printf("The max element is a[%d][%d],its value is  %d.\n",x1,x2,max);
	
}
void main()
{
	int a[N][N]={{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4},{5,5,5,5,5}};
	int (*p)[5],i,j,s;
	p=a;
	outputMatrix(p);
	for(i=0;i<N;i++)
		for(j=i;j<N;j++)
		{
			s=*(*(p+i)+j);
			*(*(p+i)+j)=*(*(p+j)+i);
			*(*(p+j)+i)=s;
		}
	outputMatrix(p);
	maxInMatrix(p);

	
}
