#include <stdio.h>
//The smallest element in a 3 by 4 matrix and its row number
findmin(int a[][4],int ln[4])
{
	int i,j,t;
	for(i=0;i<4;i++)   //i�е��±�
	{
		t=0;				
		for(j=1;j<3;j++)   //�ڵ�i����,��t�к͵�j��Ԫ����һ�Ƚ�
			if(a[j][i]<a[t][i]) //t������ʾÿ�αȽ��бȽ�С��ֵ���ڵ��к�
				t=j;          //t������ʾÿ�αȽ��бȽ�С��ֵ���ڵ��к�
		ln[i]=t;             //�ѵ�i������СԪ�ص����ڵ��кŸ�������Ԫ��li[i].
	}
}

void main()
{
	int i,j;
	int s[3][4]={{1,9,3,4},{9,8,7,1},{1,3,5,7}};//��ʼ����λ����3*4
	int lmin[4];                  //���ÿ����СԪ�����ڵ��к�
	findmin(s,lmin);
	printf("min & lin number:\n");
	for(i=0;i<4;i++)
	{
		j=lmin[i];
		printf("%3d of line %d \n",s[j][i],j);
	}

//end
}