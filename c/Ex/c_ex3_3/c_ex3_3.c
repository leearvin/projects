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
			printf("%d ",xx[i][j]);  //���Matrix
			if(i==j)                //�ҳ����ϵ����µĶԽ���
			{
				sum+=xx[i][j];      //�Խ��ߵĺ�
				if(i!=(n-1-j))   //���������matrix ��ȥ�����ĵ��ظ��� 
					sum+=xx[i][n-1-j];   //��������һ���Խ��ߵ��б���n-1-j,
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
