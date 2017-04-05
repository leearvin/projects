#include <stdio.h>
//一个3*5的矩阵(二维数组),输出最小的元素和下标
void main()
{
	int i,j,x,y;
	int max=0;
	int a[3][5]={{1,2,3,4,5,},{6,7,8,9,10},{11,1,11,23,45}};
	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
		{
			if(max<a[i][j]);
			{	
				max=a[i][j];
				x=i;y=j;
			}
		}
		printf("Max of Array is a[%d][%d]:%d",x,y,max);
	
}