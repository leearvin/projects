#include <stdio.h>
#define N 10

void main()
{
	void input();
	void sort();
	void output();
	int a[N],*p;
	input (a,N);
	p=a;
	sort(p,N);
	output(p,N);
}

void input(arr,n)
int arr[],n;
{
	int i;
	printf("input date:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
}

void sort(ptr,n)
int *ptr,n;
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(*(ptr+j)>*(ptr+j+1))
			{
				t=*(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=t;

			}
	printf("\n1111\n");
}

void output(arr,n)
int arr[],n;
{
	int i,*ptr=arr;
	printf("outputdate:\n");
	for(;ptr-arr<n;ptr++)
		printf("%4d",*ptr);
	printf("\n");
}