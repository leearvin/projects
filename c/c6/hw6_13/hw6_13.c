#include <stdio.h>
//��ָ�������һλ�����ָ��2�ַ��� ���10���ַ��� ���ֵ�˳����������
#include <string.h>
#define N 3
#define M 10

//program 1
sortByAscenting(char *a)
{
	char *pt1,*pt2,str1[N][M];
	int i,j;
	pt1=a;
	pt2=str1[0];
	
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			
			//printf("%s",pt1+i);
			
			if(strcmp(pt1+i,pt1+j)>0)	      //�Ƚ� ������ַp+i*M,p+j*M���ַ���;
			{
				strcpy(pt2,pt1+i);
				strcpy(pt1+i,pt1+j);
				strcpy(pt1+j,pt2);
			}
		}
		
	}


}
void main()
{
	char *p1,str[N][M];
	int i;
	p1=str[0];  //��ʼ��
	printf("Pls .enter ten strings:\n");
	for(i=0;i<N;i++)
		scanf("%s",p1+i);
	for(i=0;i<N;i++)
	{
		printf("%s\n",p1+i*M);
			
	}
	sortByAscenting(p1);
	
	for(i=0;i<N;i++)
	{
		printf("%c\n",*(p1+i));
			
	}

}