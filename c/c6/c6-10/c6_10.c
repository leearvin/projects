#include <stdio.h>
#define M 3
#define N 4
void main()
{
	float a[M][N];
	float score1,score2,score3;  //pa指向二维数组
	float *pa=a[0];
	//float (*pa)[7]=a;
	int i,j;
	void fun();
	printf("Pls. input 12 numbers:\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%f",&a[i][j]);
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			printf("%f ",a[i][j]);
	printf("%d ",pa);
	
	fun(pa,&score1,&score2,&score3);
	printf("%.2f,%.2f,%.2f\n",score1,score2,score3);
}

void fun(b,p1,p2,p3)
float b[][N],*p1,*p2,*p3;  //float (*b)[N];也可以
{
	int i,j;
	printf("%d ",b);
	*p1=*p2=*p3=0;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
		{
			printf("%f ",b[i][j]);
			if(i==0)
				*p1+=b[i][j];
			if(i==1)
				*p2+=b[i][j];
			if(i==2)
				*p3+=b[i][j];

		}
}

