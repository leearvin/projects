#include <stdio.h>
//getchar()
//getchar() 无参数
//getchar() 返回输入的第一个字符
void main()
{
	char ch;
	printf("Pls. input a character or fuhao:\n");
	ch=getchar();
	putchar(ch);
	putchar(ch);
	putchar('\n');
	putchar(ch);
	putchar(ch);
	putchar('\n');
}
