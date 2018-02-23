#include <stdio.h>
#include <math.h>
//judge whether a number is a prime number
//algorithm1:go through  from 2 to sqrt(n)
//algorithm2:
int isPrime_1(int num)
{
	int tmp=sqrt(num); 
	int i=2;
	for(;i<=tmp;i++)
		if(num%i==0)
			return 0;   //0, not prime
	return 1;    //1 ,  prime
}
//����5������ �й��� �������е��������������6�ı��������ࡣ�����еĲ���
int isPrime_2(int num)
{
	int i=5;    //��5��ʼ����
	int tmp =sqrt( num);
	if(num ==2|| num==3 );
		return 1;    //2 ,3������
	if(num%6!=1&&num%6!= 5)   //����6�ı�����2�� һ����������
		return 0;  
	
	for(;i<=tmp;i+=6 )      //ѭ���Ĳ���Ϊ6
		if(num%i== 0||num %(i+2)==0 ) //���Ƿ�����������ӣ�����������һ��������С��sqrt(n)��6����������档������� 
			return 0;				//��������
					//����5������ �й��� �������е��������������6�ı��������ࡣ
	return 1 ;       //�����������
}

void main()
{
	int num;
	printf("Pls. enter a integer number:");
	scanf("%d",&num);
	//if(isPrime_1(num))
	if(isPrime_2(num))
		printf("%d is a Prime.\n",num);
	else
		printf("%d is NOT a Prime.\n",num);	
}
	