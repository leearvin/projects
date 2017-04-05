#include <stdio.h>

struct salary
{
	char name[20];
	int base;
	int allowance;
	int deduct;
}arr[4]=
	{
		{"liqun",870,500,85},
		{"dongfang",1250,800,63},
		{"majing",1520,1000,72},
		{"liudong",2050,1500,120}
	};

void main()
{
	int i;
	struct salary *p;
	p=arr;
	for(i=0;i<4;i++,p++)
	{
		printf("%s\'s gross pay is %d\n",p->name,p->base+p->allowance-p->deduct);
	}
}