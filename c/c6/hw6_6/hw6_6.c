#include <stdio.h>
//����3���ַ��� ���ŴӴ�С�ĵ�˳�����
#define N 100
void sortByAscenting(char **p1,char **p2)   //����Ķ�άָ��
{
	char *pt1,*pt2,*pt3;
	//int i;
	pt1=p1;
	pt2=p2;
	
	for(;*pt1!='\0';pt1++,pt2++)    //����ַ���û�е�β�� ��ִ��ѭ��
	{ 
		if(*pt1==*pt2)      //�����ǰ����ĸ���
			continue;
		if(*pt1>*pt2)
		{
			pt3=*p1;    //****��������ָ�������ڵ�ֵ ���ֵ��ָ���ַ����ĵ�ַ��******
			*p1=*p2;
			*p2=pt3;	
			printf("p1:%s  p2:%s\n",p1,p2);
			break;
			
		}
		if(*p1<*p2)
			break;
	}
}

void main()
{
	int i;
	char str1[N],str2[N],str3[N];
	char *p[3];
	p[0]=str1;
	p[1]=str2;
	p[2]=str3;
	
	printf("Pls enter three strings:\n");
	for(i=0;i<3;i++)
	{
		scanf("%s",p[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("%s\n",p[i]);
	}
	sortByAscenting(p[0],p[1]);
	sortByAscenting(p[0],p[2]);
	sortByAscenting(p[1],p[2]);
	for(i=0;i<3;i++)
	{
		printf("%s\n",p[i]);
	}
}