#include <stdio.h>
//��ָ�������һλ�����ָ��2�ַ��� ���10���ַ��� ���ֵ�˳����������
#include <string.h>
#define N 10
#define M 20

//program 1
void main()
{
	char *p1,*p2,str[N][M]={"abc","dfa","ddd","bbb","ccc","cca","hf","dsafa","dfa","daf"};
	int i,j;

	p1=p2=str[0];  //��ʼ��
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(strcmp(p1+i*M,p1+j*M)>0)	      //�Ƚ� ������ַp+i*M,p+j*M���ַ���;
			{
				strcpy(p2,p1+i*M);
				strcpy(p1+i*M,p1+j*M);
				strcpy(p1+j*M,p2);
			}
		}
		printf("%s\n",p1+i*M);
	}

}