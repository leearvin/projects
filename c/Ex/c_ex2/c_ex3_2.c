#include <stdio.h>
//���������к���fun�Ĺ����ǣ����β�n�и�λ��Ϊż������ȡ��������ԭ���Ӹ�λ����λ��˳�����һ���µ���������Ϊ����ֵ���ء�
unsigned long fun(unsigned long  n)
{ 
	unsigned long x=0,s,i;    
	int  t;  //����
	s=n;   //�β�ֵ����
/*********found**********/
	i=1; //ż����λ��
	
/*********found**********/
	while(s!=0)  //���������
	{  
		t=s%10;  //���һλ����
		if(t%2==0)
		{
/*********found**********/
			x=x+t*i;   
			i=i*10;
		}
		s=s/10;   //�ص����һλ
	}
	return x;
}

main()
{ 
	unsigned long n=-1;
	
	while(n>99999999||n<0)
	{	
		printf("Please input(0<n<100000000):");
		scanf("%ld",&n); }
		printf("\nThe result is:%ld\n",fun(n));
}
