#include <stdio.h>
//The smallest element in a 3 by 4 matrix and its row number
findmin(int a[][4],int ln[4])
{
	int i,j,t;
	for(i=0;i<4;i++)   //i列的下标
	{
		t=0;				
		for(j=1;j<3;j++)   //在第i列中,第t行和第j行元素逐一比较
			if(a[j][i]<a[t][i]) //t用来表示每次比较中比较小的值所在的行号
				t=j;          //t用来表示每次比较中比较小的值所在的行号
		ln[i]=t;             //把地i列中最小元素的所在的行号赋予数组元素li[i].
	}
}

void main()
{
	int i,j;
	int s[3][4]={{1,9,3,4},{9,8,7,1},{1,3,5,7}};//初始化二位数组3*4
	int lmin[4];                  //存放每列最小元素所在的行号
	findmin(s,lmin);
	printf("min & lin number:\n");
	for(i=0;i<4;i++)
	{
		j=lmin[i];
		printf("%3d of line %d \n",s[j][i],j);
	}

//end
}