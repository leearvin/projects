
#include <stdio.h>
//judge if the inputted number(n) is a leap year.
//rule 1, n is divisible by 4, but 100
//rule 2, n is divisible by 100 ,at the same time , divisible by 400.

void main()
{
	int year;
	printf("Pls. enter a year:");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
		printf("Yes\n");
	else
		printf("No\n");
}


