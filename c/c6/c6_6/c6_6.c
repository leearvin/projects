#include <stdio.h>
//把二维数组当成一维数组访问,指向数组元素的指针
//a[i][j] = *(a[0]+n*i+j)     访问方法 
void main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int i,j,*p;
	p=a[0];    //一级指针
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			printf("%3d",*(p+4*i+j));  
	printf("\n");
}