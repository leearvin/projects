#include <stdio.h>

union data
{
	char c;
	int i;
	float f;
};

void main()
{
	union data ul;
	ul.i=12;
	ul.f=3.4;
	printf("%d",ul.i);  //´óÊý£¬£¬±»f¸²¸Ç
}