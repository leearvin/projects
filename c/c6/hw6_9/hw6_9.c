#include <stdio.h>
#include <string.h>
//������ӡһ���ַ���
#define N 100
void main()
{
	char *p1,str1[N];
	int i;
	p1=str1;
	printf("Pls. enter a string\n");
	scanf("%s",p1);
	printf("%s\n",p1);
	for(i=0;i<strlen(str1);i++,p1++); //ָ���� '\0'
	for(i=0;i<strlen(str1);i++)
		printf("%c",*(p1-i-1));   //��Ϊָ����'\0',������һ��  
	
	

}