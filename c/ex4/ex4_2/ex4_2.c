/*2、程序填空
学生的记录由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，
给定函数fun的功能是：把分数最低学生的数据放在b指定的数组中，分数最低的学生可能不止一个，
函数应返回分数最低学生的人数。
在程序的下划线处填入正确的内容并把下划线删除，使程序得出正确结果。不得增行或删行，也不得更改程序结构。
需填空程序如下：*/
#include <stdio.h>
#define  N  16
typedef struct    //定义结构
{ 
	char num[10];
	int s;
} STREC;          //结构的名字
int  fun(STREC  *a,STREC *b)
{  
	int i,n=0,min;
	min=a[0].s;
	for(i=0;i<N;i++)
/**********found***********/
		if(min> a[i].s )
			min=a[i].s;
	for(i=0;i<N;i++)
		if(a[i].s==min)
/**********found***********/
		{
			*(b++)=a[i];
			n++;  
		}
/**********found***********/
	return n;
}

main()
{
	STREC  s[N]=
	{	
		{"GA05",85},{"GA03",76},{"GA02",69},{"Gh04",85},{"GA01",91},{"GA07",72},{"GA08",64},{"GA06",87},{"GA015",85},
		{"GA013",91},{"GA012",64},{"GA014",91},{"GA011",91},{"GA017",64},{"GA018",64},{"GA016",72}
	};
	STREC  h[N];
	int i,n; FILE *out;
	n=fun(s,h);
	printf("The  %d lowest  score:  \n",n);
	for(i=0;i<n;i++)
		printf("%s  %4d\n",h[i].num,h[i].s);
	printf("\n");
	out=fopen("out14.dat","w");
	fprintf(out,"%d\n",n);
	for(i=0;i<n;i++)
		fprintf(out,"%4d\n",h[i].s);
	fclose(out);
}