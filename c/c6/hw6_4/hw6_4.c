#include <stdio.h>
//n��ѧ�� m�ſ� �ҳ��������ѧ�� ��ӡ�ɼ�
#define N 3
#define M 5

void main()
{
	//int a[3][5]={{60,50,90,80,40},{90,80,40,20,100},{90,90,90,90.90}};
	int a[N][M]={60,50,90,80,40,90,80,40,20,100,90,90,90,90,90};
	int i,j,s=0;
	printf("The students who fails to pass and their scores:\n");
	printf("name score\n");
	
	for(i=0;i<N;i++)
	{

		for(j=0;j<M;j++)
			//printf("%4d",*(*(a+i)+j));   //ֻ�������鳣����ָ�������������
			//printf("%4d ",*(p+i*M+j));   //һάָ����ö�ά����
			if(*(*(a+i)+j)<60)
			{
				printf("%4d %5d\n",i,*(*(a+i)+j));
			}
		
	}



}