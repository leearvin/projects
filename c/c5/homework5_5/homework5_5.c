#include <stdio.h>
//1.�ݹ鷨 2 ����λ 3 ����ת�ַ���"\0" 4 ������
void numToString(long n,char str[])  //������ת�����ַ���
{
	char remainder[]="a"; //���� ��ʼ����һλ���ַ���
	long quotient;   //
	quotient=n/10;    //��10����
	if(quotient!=0)     //�ж�n�ǲ��Ǹ�λ���������
		 numToString(quotient,str);//���̣��������˺�һλ�Ĵ���������
	remainder[0]=n%10+'0'; //�����n��λ�� ���������ת�����ַ�������������
	//printf("%c\n",remainder[0]);
	strcat(str,remainder);
}

void main()
{
	long n;
	char s[100]="-";
	char str[100]="";   //��ʼ��һ���յ��ַ���
	printf("Pls enter a interger number:");
	scanf("%ld",&n);
	//numToString(n,str);
	//puts(str);
	if(n>=0)   //����������
	{
		numToString(n,str);
		puts(str);
	}
	else    //������
	{
		n=-1*n;  //ת��
		//printf("%ld",n);
		numToString(n,str);
		strcat(s,str);
		puts(s);
	}

}
