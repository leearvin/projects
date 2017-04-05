#include <stdio.h>
//输入3个字符串 按着从大到小的的顺序输出
#define N 100
void sortByAscenting(char **p1,char **p2)   //传入的二维指针
{
	char *pt1,*pt2,*pt3;
	//int i;
	pt1=p1;
	pt2=p2;
	
	for(;*pt1!='\0';pt1++,pt2++)    //如果字符串没有到尾部 就执行循环
	{ 
		if(*pt1==*pt2)      //如果当前的字母相等
			continue;
		if(*pt1>*pt2)
		{
			pt3=*p1;    //****交换的是指针数组内的值 这个值是指向字符串的地址。******
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