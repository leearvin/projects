#include <stdio.h>
//将连续输入的4个数字字符拼接成一个int型的数值

void main()
{
	char d1,d2,d3,d4;
	int i;
	printf("Pls. input four character of nunmber:");
	d1 = getchar();
	d2 = getchar();
	d3 = getchar();
	d4 = getchar();
	i = (d1 - '0')*1000+(d2-'0')*100+(d3-'0')*10+(d4-'0');
	// '0'+'6' 因为字符在127以内根整数是互通的 所以相当于'0'和'6'的ASCII值48+54
	printf("This value is %d.\n",i);
}