#include<stdio.h>
#include<math.h>
//Input seconds, output  ??Hours ??minutes ??seconds, 
//

void main()
{
	long input_seconds;
	long output_hours, output_minutes,output_seconds;
	
	printf("Input the Total seconds that will be converted to HH:MM:SS \n");
	scanf("%d",&input_seconds);
	
	output_hours = input_seconds / 3600;
	output_minutes = input_seconds % 3600 /60 ;
	output_seconds = input_seconds %60;
	printf("the seconds %d is %d hours %d minutes %d seconds.\n",input_seconds ,output_hours,output_minutes,output_seconds);



}