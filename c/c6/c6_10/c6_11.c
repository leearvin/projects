#include <stdio.h>
void main()
{
	char string[]="Beijing Olympics";   //初始化数组,1 自动在结尾加一个元素 '\0',2自动计算string的长度
	int i;
	char *p=string;
	for(i=0;string[i]!='\0';i++)
		printf("%c",string[i]);   //逐个输出元素
	printf("\n");
	//printf("%s\n",string);   //从数组名string指向的元素开始输出 一直到"\0"
	printf("%s\n",p);

}