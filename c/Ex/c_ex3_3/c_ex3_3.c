#include <conio.h>
#include <stdio.h>
#define M  5
int fun(int n,int xx[M][M])
{
	int i,j,sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",xx[i][j]);  //输出Matrix
			if(i==j)                //找出左上到右下的对角线
			{
				sum+=xx[i][j];      //对角线的和
				if(i!=(n-1-j))   //如果是奇数matrix ，去掉中心点重复项 
					sum+=xx[i][n-1-j];   //本行内另一条对角线的列标是n-1-j,
			}
		}
		printf("\n");
	}
	return sum;
}
main()
{
	int aa[M][M] = {{1,2,3,4,5},{4,3,2,1,0},{6,7,8,9,0},{9,8,7,6,5},{3,4,5,6,7}};
	printf("\nThe sum of all elements on 2 diagnals is %d.",fun(M,aa));
}
