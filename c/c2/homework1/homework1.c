#include<stdio.h>
#include<math.h>

//double rounding(double double_num)
//{
//	int x,y;
//	printf("%lf\n",double_num);o8888888888888888888888888
//	x = (double_num*10000);
//	y = (double_num*1000);
//	printf("%d %d\n",x,y);
//	system("pause");
//	if(x-y>=5)
//		return ((y+1)/1000);
//	else
//		return (y/1000);
//}

void main()
{
	double a,b,c,x;
	printf("Inpute First double number:");
	scanf("%lf",&a);
	printf("Inpute Second double number:");
	scanf("%lf",&b);
	printf("Inpute Third double number:");
	scanf("%lf",&c);
	/*printf("test:%lf",a+b+c);*/
	printf("The sum of three numbers is %.3lf.\n",(a+b+c)); 
	printf("The Avenrage of three number is %.3lf.\n",(a+b+c)/3);
	x=a*a+b*b+c*c;
	printf("The value of (a*a+b*b+c*c) is %.3lf.\n ",x);
	printf("The Sqrt of (a*a+b*b+c*c) is %.3lf.\n",sqrt(x));



}