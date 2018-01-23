#include<stdio.h>
//输出小写的英文字母e和f的ASCII码和对应的大写英文字母

void main()
{
	char a,b;
	a='e';
	b='f';
	printf("%d,%d\n%c,%c\n",a,b,a-32,b-32);
}