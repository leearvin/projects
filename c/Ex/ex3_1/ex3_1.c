#include <stdio.h>
//���������к���fun�Ĺ����ǣ��ҳ�100��n��������1000��֮�����λ������ȵ���������������Щ��������s��ָ�������У������ĸ�����Ϊ����ֵ���ء��ڳ�����»��ߴ�������ȷ�����ݲ����»���ɾ����ʹ����ó���ȷ�Ľ�����ɡ�
//����������£�
#define  N  100

void main()
{ 
	int  fun(int  *s,int  n);  //�Ե��ú�������
	int  a[N],n,num=0,i;
	do
	{  
		printf("\nEnter n(<=1000);  "); 
		scanf("%d",&n);
	}while(n>1000);

	num=fun(a,n);
	printf("\n\nThe result:\n");
	for(i=0; i<num; i++) 
		printf("%5d",a[i]);
	printf("\n\n");
}

int  fun(int  *s,int  n)
{ 	
	int i,j,k,a,b,c;
	j=0;
	for(i=100;i<=n;i++)    /*ԭ���� < ���� <= , ����������222����999���༫�������ʱ���©������һ��*/

	{
/**************found**************/
		k= i ;
		a=k%10;
		k/=10;
		b=k%10; 
		k/=10;
/**************found**************/
		c=  k%10  ;
		if(a==b&&a==c) 
			s[j++]=i;
	}
	return  j;
}
