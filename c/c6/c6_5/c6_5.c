#include <stdio.h>
//�����ά�����ֵ
void main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; //��ά����
	printf("%u,%u\n",a,*a); //a��0���׵�ַ,*a��0��0�е��׵�ַ   һ����
	printf("%u,%u\n",a+1,*a+1);  //a+1��1�е��׵�ַ�� *a+1��0��1�е��׵�ַ 
	printf("%u,%u\n",a,&a[0]);   //&a[0]��0�е��׵�ַ ,����a
	printf("%u,%u,%u\n",*(a+1),a[1],&a[1][0]);  //����1��0�е��׵�ַ
	printf("%d,%d,%d\n",*(*(a+1)+2),*(a[1]+2),a[1][2]);  //1��2�е�Ԫ��
	
}