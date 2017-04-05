#include <stdio.h>
//用指针数组和一位数组的指针2种方法 完成10个字符串 按字典顺序排序后输出
#include <string.h>
#define N 10
#define M 20

//program 1
void main()
{
	char *p1,*p2,str[N][M]={"abc","dfa","ddd","bbb","ccc","cca","hf","dsafa","dfa","daf"};
	int i,j;

	p1=p2=str[0];  //初始化
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(strcmp(p1+i*M,p1+j*M)>0)	      //比较 二个地址p+i*M,p+j*M的字符串;
			{
				strcpy(p2,p1+i*M);
				strcpy(p1+i*M,p1+j*M);
				strcpy(p1+j*M,p2);
			}
		}
		printf("%s\n",p1+i*M);
	}

}