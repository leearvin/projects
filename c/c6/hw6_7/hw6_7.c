#include <stdio.h>
//输入一个字符串，统计字符串中字符个数
#define N 100
void main()
{
	char *p,string[N];
	int count=0;
	p=string;
	printf("Pls enter a string:\n");
	scanf("%s",p);
	for(;*p!='\0';p++)
		if((*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z'))
			count++;
	printf("The amount of the charactor in the string is %d\n",count);


}