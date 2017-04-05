#include <stdio.h>
//输入3个整数，升序排列，三种方法

/*
//Program 2
void main()
{
	int *p,a[3],i,j,s;
	p=a;   //初始化
	printf("Pls enter three int number:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(*(p+i)>*(p+j))
			{
				s=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=s;
			}

		}
	}
	printf("%d %d %d",*p,*(p+1),*(p+2));
}
*/


/*
//Program 1
void swap(int *p1,int *p2)
{
	int s;
	s=*p1;
	*p1=*p2;
	*p2=s;
}
void main()
{
	int *p1,*p2,*p3,a,b,c;
	p1=&a;   //初始化 否则不能用
	p2=&b;
	p3=&c;
	printf("Pls enter three number:");
	scanf("%d %d %d",p1,p2,p3);
	if(*p1>*p2)
		swap(p1,p2);
	if(*p2>*p3)
		swap(p2,p3);
	if(*p1>*p3)
		swap(p1,p3);
	printf("%d %d %d",*p1,*p2,*p3);	
}
*/