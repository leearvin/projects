#include <stdio.h>#include <stdio.h>
//selection sort
void selection_sort(int arr[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		
		for(j=i+1;j<n;j++)
			if(arr[j]<arr[k])
				k=j;
		t=arr[k];
		arr[k]=arr[i];
		arr[i]=t;
	}
}

void main()
{
	int i;
	int a[6]={5,7,4,8,9,6};
	printf("The original array:");
	for(i=0;i<6;i++)
		printf("%d ",a[i]);
	printf("\n");
	selection_sort(a,6);
	
	printf("The sorted array:");
	for(i=0;i<6;i++)
		printf("%d ",a[i]);
	printf("\n");
}