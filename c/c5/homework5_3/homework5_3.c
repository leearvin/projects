#include <stdio.h>
//n个数中的最大数
float findMax(float arr[],int n)
{
	int i;
	float max=arr[0];
	for(i=1;i<=n-1;i++)
		if(max<arr[i])
			max=arr[i];
	//printf("%f\n",max);
	return max;
}

void main()
{
	float max;
	int n=10;
	float arr[]={1,2,3,4,5,6,7,8,9,11.01,11,12,13,14.1,};
	max = findMax(arr,n);
	printf("The max in the array is %f\n",max);
}
