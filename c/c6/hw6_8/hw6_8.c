#include <stdio.h>
//×Ö·û´®ÖÐÊÇ·ñ´æÔÚ'x'
#define N 100
void main()
{
	char *p,string[N];
	int x=0;
	p=string;
	
	printf("Pls enter a string:\n");
	scanf("%s",p);
	for(;*p!='\0';p++)
		if(*p=='x')
		{
			printf("the 'x' exist in the string :\"%s\"\n",string);
			x=1;
		}
	if(x==0)
	{
		printf("the 'x' don't exist in the string :\"%s\"\n",string);
	}
		
}