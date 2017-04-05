#include <stdio.h>
//input a score between 1 and 100, output level A-E

void main()
{
	int score;
	printf("Input a score(1-100):");
	scanf("%d",&score);
	if(score<=100&&score>=90)
		printf("Level A\n");
	if(score<=89&&score>=80)
		printf("Level B\n");
	if(score<=79&&score>=70)
		printf("Level C\n");
	if(score<=69&&score>=60)
		printf("Level D\n");
	if(score<=59&&score>=0)
		printf("Level E\n");
	if(score>100||score<0)
		printf("Wrong Input.\n");
}