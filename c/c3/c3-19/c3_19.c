#include <stdio.h>
//Input a number between 1 and 7.
//output the corresponding day in a week.
void main()
{
	int a;
	printf("Input integer number:\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:printf("Monday");break;
	case 2:printf("Tuesday");break;
	case 3:printf("Wednesday");break;
	case 4:printf("Thursday");break;
	case 5:printf("Friday");break;
	case 6:printf("saturday");break;
	case 7:printf("Sunday");break;
	default:printf("Error");
	}
		
}