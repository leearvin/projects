#include <stdio.h>
//��һ��5*5����ĶԽ���Ԫ�صĺ�
void main()
{
	int i,j,sum=0;
	int a[5][5]={{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
	for(i=0;i<5;i++)
	{
		sum+=a[i][i];
		if(i!=(4-i))
			sum+=a[i][4-i];
	}
	printf("The sum is %d\n",sum);

}