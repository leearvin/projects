#include <stdio.h>
//+ _ *
void main()
{
	int minus(int,int);
	int add(int,int);
	int multiply(int,int);
	void process(int x,int y,int(*fun)(int,int));

	int a,b;
	printf("Enter a and b:");
	scanf("%d %d",&a,&b);

	printf("a minus b=");
	process(a,b,minus);
	printf("a add b=");
	process(a,b,add);
	printf("a multiply b=");
	process(a,b,multiply);


}

int minus(int x, int y)
{
	return (x-y);
}

int add(int x,int y)
{
	return (x+y);
}
int multiply(int x,int y)
{
	return x*y;
}

void process(int x,int y, int (*function)(int,int))
{
	int result;
	result=(*function)(x,y);
	printf("%d\n",result);
}
