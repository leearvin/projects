/*3������Ĵ�
���������к���fun�Ĺ����ǣ��ӵ�λ��ʼȡ�������ͱ���S��ż��λ�ϵ��������ι���һ����������t�С���λ���ڸ�λ����ֵ���ڵ�λ��
���磬��S�е���Ϊ7654321ʱ��t�е���Ϊ642��
�����������ָ����λ�Ĵ���ʹ���ܹ��ó���ȷ�����
ע�⣺��Ҫ�Ķ�main�������������л�ɾ�У�Ҳ���ø��ĳ���Ľṹ��
������������£�*/

#include <stdio.h>
/**********found**********/
void fun(long s, long *t)   //tҪ����ָ����� ��ַ
{  
	long s1=10;   //λ��������   
	s/=10;    //s�ص����һλ
	*t=s%10;  //�ѵ�ǰs�����һ������ Ҳ����ԭʼ���ֵĵ�һ��ż��λ�ŵ�t�ĸ�λ
	/**********found**********/
	while(s>0)     //��s�������ֵ�ʱ��
	{  
		s=s/100;    //�е�2λ����¶��һ��ż��λ����λ
		*t=s%10*s1+*t;  //�ڵ�ǰT��ǰ�� �� ��ǰ���һλ�����˵�ǰλ��*10 �ڼ���ԭ�е�t
		s1=s1*10;   // ÿһ��ѭ�� ��һλ*10
   }
}

main()
{ 
	long  s,t;
	printf("\nPlease enter s:"); 
	scanf("%ld",&s);
	fun(s,&t);
	printf("The result is: %ld\n",t);
}