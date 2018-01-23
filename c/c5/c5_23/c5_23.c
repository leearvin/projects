#include <stdio.h>
#include "file2.h"

#ifdef DE
#define R 1.0
#else
#define R 2.0
#endif

void main()
{
	float s;
	s=3.14*R*R;
	printf("%f\n",s);
}