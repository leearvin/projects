#include <stdio.h>
//字符串复制 不需用strcopy
#define N 100
void main()
{
	char *p1,*p2,str1[N],str2[N];
	int i;
	p1=str1;
	p2=str2;
	printf("Pls. enter a string\n");
	scanf("%s",p1);
	printf("%s\n",p1);
	for(;;p1++,p2++)
	{	
		*p2=*p1;
		if(*p1=='\0')
			break;
	}
	printf("%s\n",str2);

		
}