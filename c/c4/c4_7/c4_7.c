#include <stdio.h>
#include <string.h>

void main()
{
	int i,j;
	char t[20],s[5][20]={"China","American","Japan","France","Australia"};
	//Bubble sort
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
			
			if(strcmp(s[i],s[j])>0)
			{
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);
			}
	}
	for(i=0;i<5;i++)
		printf("\n%s",s[i]);
}