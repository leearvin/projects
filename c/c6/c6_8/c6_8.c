#include <stdio.h>
//��һά����������Ԫ��
void main()
{
	int sub_max(int b[],int i);
	int n,a[10];
	int *ptr=a;   //����ָ��ָ������
	int max;
	printf("Pls. enter ten number for teh array:\n");
	for(n=0;n<=9;n++)  //������������Ԫ�ص�����
		scanf("%d",&a[n]);
	max=sub_max(ptr,10);  //���ú���,ptr��a��ָ��,��Ϊʵ�����뺯��m,ptr������a���׵�ַ
	printf("max=%d\n",max);
	
}

//int sub_max(int b[],int i)
//{
//	int temp,j;
//	temp=b[0];
//	for(j=1;j<=i-1;j++)
//		if(temp<b[j])
//			temp=b[j];
//	return temp;
//}

int sub_max(b,i)
int *b,i;
{
	int temp,j;
	temp=b[0];
	for(j=1;j<=i-1;j++)
	{
		if(temp<b[j])
			temp=b[j];
	}
	return temp;
}
