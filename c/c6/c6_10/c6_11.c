#include <stdio.h>
void main()
{
	char string[]="Beijing Olympics";   //��ʼ������,1 �Զ��ڽ�β��һ��Ԫ�� '\0',2�Զ�����string�ĳ���
	int i;
	char *p=string;
	for(i=0;string[i]!='\0';i++)
		printf("%c",string[i]);   //������Ԫ��
	printf("\n");
	//printf("%s\n",string);   //��������stringָ���Ԫ�ؿ�ʼ��� һֱ��"\0"
	printf("%s\n",p);

}