#include<stdio.h>
#include<math.h>
//Input two lowercase letters,output Capital letters..
//

void main()
{
	char ch1,ch2,ch3;
	
	printf("Input the first lowercase letter ch1 and ch2(a,b):\n");
	scanf("%c,%c",&ch1,&ch2);
	
	ch3 = ch1;
	ch1 = ch2 - 32;
	ch2 = ch3 -32;
	printf("Output ch1:%c, ch2:%c\n",ch1,ch2);
	


}